//
// Created by Alin on 27/10/2022.
//

#include "Collision.h"
#include "global.h"


bool Collision::detectColisionwithFood(Snake *snake1, Vector2 food1){
    if (((food1.x == snake1[0].position.x) && (food1.y == snake1[0].position.y))) {
        return true;
    }

    return false;
}
bool Collision::colisionwhithHimself(Snake *snake1) {
    for (int i = 1; i < snakeLenght; i++) {
        if ((snake1[0].position.x == snake1[i].position.x) && (snake1[0].position.y == snake1[i].position.y)) {
            return true;
        }
    }
    return false;
}
