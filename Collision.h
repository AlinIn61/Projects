//
// Created by Alin on 27/10/2022.
//
#include <raylib.h>
#include "global.h"

#ifndef SNAKE_COLLISION_H
#define SNAKE_COLLISION_H




class Collision {
public:
    static bool detectColisionwithFood(Snake *snake1, Vector2 food1);
    static bool colisionwhithHimself(Snake *snake1);

};


#endif //SNAKE_COLLISION_H
