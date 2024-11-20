#include "StageScene.h"

void StageScene::Init() {}

void StageScene::Update(const char* keys, const char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNO = CLEAR;
	}
}

void StageScene::Draw() {}