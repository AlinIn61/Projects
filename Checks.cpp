//
// Created by Alin on 30/10/2022.
//

#include "Checks.h"


void Checks::checkBoundary(Snake *snake) {
    for (int i = 0; i < snakeLenght; i++) {

        if (snake[i].position.x > gridWidth-1) {
            snake[i].position.x = 0;
        }
        else if (snake[i].position.x < 0) {
            snake[i].position.x = gridWidth - 1;
        }
        else if (snake[i].position.y > gridHeight-1) {
            snake[i].position.y = 0;
        }
        else if (snake[i].position.y < 0) {
            snake[i].position.y = gridHeight-1;
        }
    }
}
void Checks::checkifPressed(Snake *snake) {
    if (IsKeyPressed(KEY_UP) && (snake[0].direction != DOWN)) {
        snake[0].direction = UP;
    } else if (IsKeyPressed(KEY_DOWN) && (snake[0].direction != UP)) {
        snake[0].direction = DOWN;
    } else if (IsKeyPressed(KEY_LEFT) && (snake[0].direction != RIGHT)) {
        snake[0].direction = LEFT;
    } else if (IsKeyPressed(KEY_RIGHT) && (snake[0].direction != LEFT)) {
        snake[0].direction = RIGHT;
    }
}

void Checks::collisionwithHims(Snake *snake){
    bool snakeBool = Collision::colisionwhithHimself(snake);
    if (snakeBool) {
        gameOver = true;
    }
}

