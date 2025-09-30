#pragma once
#include <raylib.h>

const int STAR_COUNT = 100;

struct Star {
    float x;
    float y;
    float speed;
};

class Background {
public:
    Background(int screenWidth, int screenHeight);
    void Update();
    void Draw();
private:
    Star stars[STAR_COUNT];
    int screenWidth;
    int screenHeight;
};
