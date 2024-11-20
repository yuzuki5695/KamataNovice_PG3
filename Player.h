#pragma once
#include<KamataEngine.h>

class Player
{
private:
	KamataEngine::Vector2 Pos_;
	KamataEngine::Vector2 speed_;

public:
	Player();

	void Init();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();
};