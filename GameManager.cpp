#include "GameManager.h"

GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	// 初期シーンの設定
	currentSceneNO_ = TITLE;
}

GameManager::~GameManager(){}

int GameManager::Run() {

	int number = 0;

	while (Novice::ProcessMessage() == 0 ){
		Novice::BeginFrame(); // フレームの開始

		inputManager_.Update();

		if (sceneArr_[currentSceneNO_]->GetSceneNO() == 0 ) {
			number = 0;
		}else if (sceneArr_[currentSceneNO_]->GetSceneNO() == 1) {
			number = 1;
		} else if (sceneArr_[currentSceneNO_]->GetSceneNO() == 2) {
			number = 2;
		}

		// シーンチェック
		prevSceneNo_ = currentSceneNO_;
		currentSceneNO_ = sceneArr_[currentSceneNO_]->GetSceneNO();

		// シーン変更チェック
		if (prevSceneNo_ != currentSceneNO_) {
			sceneArr_[currentSceneNO_]->Init();
		}

		//// 更新処理
		sceneArr_[currentSceneNO_]->Update(inputManager_.Getkeys(), inputManager_.GetPrekeys()); // シーンごとの更新処理

		//// 描画処理
		sceneArr_[currentSceneNO_]->Draw();

		// シーン番号
		Novice::ScreenPrintf(0,0,"SceneNO : %d",number);

		if (number == 0) {
			Novice::ScreenPrintf(640, 320, "TITLE");
		}else if (number == 1) {
			Novice::ScreenPrintf(640, 320, "STAGE");
		}else if (number == 2) {
			Novice::ScreenPrintf(640, 320, "CLEAR");
		}

		Novice::EndFrame(); //  フレームの終わり

		// ESCキーが押されたらループを抜ける
		if (inputManager_.GetPrekeys()[DIK_ESCAPE] == 0 && inputManager_.Getkeys()[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}