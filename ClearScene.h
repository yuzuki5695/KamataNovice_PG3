#pragma once
#include"IScene.h"

// クリアシーン
class ClearScene : public IScene
{
public:
	void Init() override;
	void Update(const char* keys, const char* preKeys) override;
	void Draw() override;
};