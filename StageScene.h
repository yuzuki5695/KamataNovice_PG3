#pragma once
#include"IScene.h"
#include"InputHandler.h"

// ステージシーン
class StageScene : public IScene
{
private:
	InputHandler *inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;

public:
	StageScene();
	void Init() override;
	void Update(const char* keys, const char* preKeys) override;
	void Draw() override;
};