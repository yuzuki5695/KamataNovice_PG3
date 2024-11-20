#pragma once
#include <Novice.h>
#include <cstring> // memcpy用

class InputManager {
private:
    char keys_[256] = { 0 };     // 現在のキー状態
    char preKeys_[256] = { 0 };  // 前フレームのキー状態

public:
    // キー入力状態の更新
    void Update() {
        std::memcpy(preKeys_, keys_, sizeof(keys_));
        Novice::GetHitKeyStateAll(keys_);
    }

    char* Getkeys() { return keys_; }
    char* GetPrekeys() { return preKeys_; }
};