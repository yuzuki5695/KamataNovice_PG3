#include"IScene.h"

// �^�C�g���V�[���ŏ�����
int IScene::sceneNO = TITLE;

// ���z�f�X�g���N�^�̒�`
// �������z�֐����Ă��Ȃ��̂ŁA�����Œ�`����
IScene::~IScene(){}

// �V�[���ԍ��̃Q�b�^�[
int IScene::GetSceneNO() { return scene; };