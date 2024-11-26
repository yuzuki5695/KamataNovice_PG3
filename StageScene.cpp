#include "StageScene.h"

StageScene::StageScene() {};

void StageScene::Init() {
	inputHandler_ = new InputHandler();

	// Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	// New Player
	player_ = new Player();
	player_->Init();
}

void StageScene::Update(const char* keys, const char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNO = CLEAR;
	}

	// get Input
	iCommand_ = inputHandler_->HandleInput();

	// set command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw() {
	player_->Draw();
}