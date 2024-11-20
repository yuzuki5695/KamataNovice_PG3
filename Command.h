#pragma once
#include"Player.h"
class  Player;

class ICommand{
public:
	virtual ~ICommand();
	virtual void Exec(Player& player) = 0;
};

class MoveRightCommand  :ICommand {
public:
	virtual void Exec(Player& player) override;
};

class MoveLeftCommand :ICommand {
public:
	virtual void Exec(Player& player) override;
};