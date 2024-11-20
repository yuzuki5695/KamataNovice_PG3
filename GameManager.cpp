#include "GameManager.h"
#include<Novice.h>

GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[TITLE] = std::make_unique<TitleScene>();



	// 初期シーンの設定
	currentSceneNO_ = TITLE;
}

GameManager::~GameManager(){}

int GameManager::Run() {
	while (Novice::ProcessMessage() == 0 ){
		Novice::BeginFrame(); // フレームの開始
		inputManager_->Update();

		// シーンチェック
		prevSceneNo_ = currentSceneNO_;
		currentSceneNO_ = sceneArr_[currentSceneNO_]->GetSceneNO();

		// シーン変更チェック
		if (prevSceneNo_ != currentSceneNO_) {
			sceneArr_[currentSceneNO_]->Init();
		}

		//// 更新処理
		sceneArr_[currentSceneNO_]->Update(inputManager_->Getkeys(), inputManager_->GetPrekeys()); // シーンごとの更新処理

		//// 描画処理
		sceneArr_[currentSceneNO_]->Draw();

		//Novice::ScreenPrintf(0,0,"PrevSceneNo",&prevSceneNo_);

		Novice::EndFrame(); //  フレームの終わり

		// ESCキーが押されたらループを抜ける
		if (inputManager_->GetPrekeys()[DIK_ESCAPE] == 0 && inputManager_->Getkeys()[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}