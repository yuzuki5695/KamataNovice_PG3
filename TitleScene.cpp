#include "TitleScene.h"
#include<Novice.h>

void TitleScene::Init(){}

void TitleScene::Update(const char* keys, const char* preKeys) {
	if(preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNO = STAGE;
	}
}

void TitleScene::Draw() {}