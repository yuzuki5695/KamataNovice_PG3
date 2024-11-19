#include "TitleScene.h"

void TitleScene::Init(){}

void TitleScene::Update() {
	if(prekeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNO = STAGE;
	}
}

void TitleScene::Draw() {}