//
// Created by Alin on 30/10/2022.
//

#include "SnakeMethods.h"

void SnakeMethods::init(Snake *snake) {
    int snakeHeadX = GetRandomValue(0, gridWidth -1);
    int snakeHeadY = GetRandomValue(0, gridHeight - 1);
    snake[0].position.x = snakeHeadX;
    snake[0].position.y = snakeHeadY;
    int  dir  = GetRandomValue(1, 4);
    if (dir == 1) {
        snake[0].direction = DIRECTION::DOWN;
    }
    else if (dir == 2) {
        snake[0].direction = DIRECTION::LEFT;
    }
    else if (dir == 3) {
        snake[0].direction = DIRECTION::RIGHT;
    }
    else {
        snake[0].direction = DIRECTION::UP;
    }
}

void SnakeMethods::increaseSize(Snake *snake,Vector2 &food) {
    bool foodBool =  Collision::detectColisionwithFood(snake, food);
    if (foodBool) {
        FoodGen::init(snake, food);
        snakeLenght++;

    }
}

void SnakeMethods::Move(Snake *snake) {

    for (int i = snakeLenght; i > 0; i--) {
        snake[i].position = snake[i - 1].position;

    }

    if (snake[0].direction == UP) {
        snake[0].position.y += 1;
    }
    else if (snake[0].direction == DOWN) {
        snake[0].position.y -= 1;
    }
    else if (snake[0].direction == LEFT) {
        snake[0].position.x -= 1;
    }
    else if (snake[0].direction == RIGHT) {
        snake[0].position.x += 1;
    }


}
