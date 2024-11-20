#pragma once
#include <Novice.h>

class InputManager {
private:
    char keys_[256] = { 0 };     // 現在のキー状態
    char preKeys_[256] = { 0 };  // 前フレームのキー状態

public:
    // キー入力状態の更新
    void Update() {
        memcpy(preKeys_, keys_, 256);
        Novice::GetHitKeyStateAll(keys_);
    }

    char* Getkeys() { return keys_; }
    char* GetPrekeys() { return preKeys_; }
};