#include "Player.h"
#include<Novice.h>

Player::Player() {}

void Player::Init(){
	Pos_ = { 640.0f,120.0f };
	speed_ = { 5.0f,5.0f };
}

void Player::Update() {}

void Player::Draw() {
	Novice::DrawBox(int(Pos_.x),int(Pos_.y), 40, 40, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->Pos_.x += this->speed_.x;
}

void Player::MoveLeft() {
	this->Pos_.x -= this->speed_.x;
} 