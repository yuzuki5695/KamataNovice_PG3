#include "Player.h"

Player::Player() {}

void Player::Init(){
	Pos_ = { 640.0f,320.0f };
	speed_ = { 5.0f,5.0f };
}

void Player::Update() {}

void Player::Draw() {}

void Player::MoveRight() {
	this->Pos_.x += this->speed_.x;
}

void Player::MoveLeft() {
	this->Pos_.x -= this->speed_.x;
}