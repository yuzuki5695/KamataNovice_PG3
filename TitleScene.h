#pragma once
#include"IScene.h"
#include<Novice.h>

// タイトルシーン
class TitleScene : public IScene
{
public:
	void IScene::Init() override;
	void IScene::Update() override;
	void IScene::Draw() override;
};

