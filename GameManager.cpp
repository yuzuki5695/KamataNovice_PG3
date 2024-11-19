#include "GameManager.h"

GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[] = std::make_unique<TITLE>();
	sceneArr_[TITLE] = std::make_unique<TITLE>();



	// 初期シーンの設定
	
}


GameManager::~GameManager(){}