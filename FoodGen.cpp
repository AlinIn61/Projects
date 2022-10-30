//
// Created by Alin on 30/10/2022.
//

#include "FoodGen.h"


void FoodGen::RandomValue(Vector2& food) {
    food.x = GetRandomValue(0 , gridWidth-1);
    food.y = GetRandomValue(0, gridHeight-1);
}
bool FoodGen::IsInsideSnake(Snake *snake,Vector2 food) {
    for (int i = 0; i < snakeLenght; i++) {
        if ((food.x == snake[i].position.x) && (food.y == snake[i].position.y))
        {
            return true;
        }
    }
    return false;
}

void FoodGen::init(Snake *snake,Vector2& food) {
    RandomValue(food);
    while (IsInsideSnake(snake, food)) {
        RandomValue(food);
    }
}
