//
// Created by Alin on 29/10/2022.
//
#include <raylib.h>
#ifndef SNAKE_GLOBAL_H
#define SNAKE_GLOBAL_H


extern const int screenWidth;
extern const int screenHeight;
extern float gridSize;
extern int gridWidth;
extern int gridHeight;

extern bool gameOver;
extern bool pause;
extern int snakeLenght;

enum DIRECTION
{
    UP = 1,
    DOWN = -1,
    LEFT= 10,
    RIGHT = -10
};

struct Snake {
    Vector2 position;
    int direction;
};


#endif //SNAKE_GLOBAL_H
