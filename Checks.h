//
// Created by Alin on 30/10/2022.
//

#ifndef SNAKE_CHECKS_H
#define SNAKE_CHECKS_H
#include "global.h"
#include "raylib.h"
#include "Collision.h"

class Checks {
public:
    static void checkBoundary(Snake *snake);
    static void checkifPressed(Snake *snake);
    static void collisionwithHims(Snake *snake);
};





#endif //SNAKE_CHECKS_H
