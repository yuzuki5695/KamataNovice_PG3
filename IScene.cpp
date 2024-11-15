#include"IScene.h"

// タイトルシーンで初期化
int IScene::sceneNO = TITLE;

// 仮想デストラクタの定義
// 純粋仮想関数していないので、ここで定義する
IScene::~IScene(){}

// シーン番号のゲッター
int IScene::GetSceneNO() { return scene; };