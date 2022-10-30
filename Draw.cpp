//
// Created by Alin on 30/10/2022.
//

#include "Draw.h"


void Draw::drawFood(Vector2 food) {
    Vector2 coord = Transformate(food, gridSize, screenHeight).Modify();
    float radius = (float)gridSize / 2.0f;
    DrawCircleV( {coord.x +radius, coord.y-radius }, radius, RED);
}

void Draw::drawSnake(Snake *snake) {
    for (int i = 0; i < snakeLenght; i++) {
        Vector2 coord = Transformate(snake[i].position, gridSize, screenHeight).Modify();
        DrawRectangleV( { coord.x, coord.y - gridSize }, { gridSize, gridSize }, GREEN);
    }
}

void Draw::drawGame(bool &drawFlag, Snake *snake,Vector2 food) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    if (drawFlag) {
        Draw::drawSnake(snake);
    }
    Draw::drawFood(food);
    EndDrawing();
}