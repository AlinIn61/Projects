//
// Created by Alin on 30/10/2022.
//

#ifndef SNAKE_DRAW_H
#define SNAKE_DRAW_H

#include "Transform.h"
#include <raylib.h>
#include "global.h"

class Draw {
public:
    static void drawFood(Vector2 food);
    static void drawSnake(Snake *snake);
    static void drawGame(bool &drawFlag, Snake *snake,Vector2 food);

};


#endif //SNAKE_DRAW_H
