//
// Created by Alin on 30/10/2022.
//

#ifndef SNAKE_SNAKEMETHODS_H
#define SNAKE_SNAKEMETHODS_H

#include "global.h"
#include "Collision.h"
#include "FoodGen.h"
#include <raylib.h>


class SnakeMethods {
public:
    void init(Snake *snake);
    void increaseSize(Snake *snake,Vector2 &food);
    void Move(Snake *snake);

};


#endif //SNAKE_SNAKEMETHODS_H
