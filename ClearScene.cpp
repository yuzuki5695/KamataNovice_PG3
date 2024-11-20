#include "ClearScene.h"

void ClearScene::Init() {}

void ClearScene::Update(const char* keys, const char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNO = TITLE;
	}
}

void ClearScene::Draw() {}