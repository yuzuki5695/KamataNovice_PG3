#include "StageScene.h"

void StageScene::Init() {
	inputHandler_ = new InputHandler();

	// Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	// New Player
	player_ = new Player();
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

void StageScene::Draw() {}