#include "background.hpp"

Background::Background(int screenWidth, int screenHeight)
    : screenWidth(screenWidth), screenHeight(screenHeight) {
    for (int i = 0; i < STAR_COUNT; i++) {
        stars[i].x = GetRandomValue(0, screenWidth);
        stars[i].y = GetRandomValue(0, screenHeight);
        stars[i].speed = GetRandomValue(20, 100) / 100.0f;
    }
}

void Background::Update() {
    for (int i = 0; i < STAR_COUNT; i++) {
        stars[i].y += stars[i].speed;
        if (stars[i].y > screenHeight) {
            stars[i].y = 0;
            stars[i].x = GetRandomValue(0, screenWidth);
        }
    }
}

void Background::Draw() {
    for (int i = 0; i < STAR_COUNT; i++) {
        DrawPixelV(Vector2{ stars[i].x, stars[i].y }, RAYWHITE);
    }
}
