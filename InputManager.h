#pragma once
#include <Novice.h>

class InputManager {
private:
    char keys[256] = { 0 };     // 現在のキー状態
    char preKeys[256] = { 0 };  // 前フレームのキー状態

public:
    // キー入力状態の更新
    void Update() {
        memcpy(preKeys, keys, 256);
        Novice::GetHitKeyStateAll(keys);
    }

    char* Getkeys() { return keys; }
    char* GetPrekeys() { return preKeys; }
};