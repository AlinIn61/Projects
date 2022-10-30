//
// Created by Alin on 30/10/2022.
//

#ifndef SNAKE_FOODGEN_H
#define SNAKE_FOODGEN_H

#include "global.h"
#include "raylib.h"

class FoodGen {

public:
    static void RandomValue(Vector2& food);
    static bool IsInsideSnake(Snake *snake, Vector2 food);

    static void init(Snake *snake, Vector2& food);


};



#endif //SNAKE_FOODGEN_H
