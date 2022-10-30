//
// Created by Alin on 23/10/2022.
//
#include <raylib.h>

#ifndef SNAKE_TRANSFORM_H
#define SNAKE_TRANSFORM_H


class [[maybe_unused]] Transformate {
    Vector2 poz;
    int grid;
    int height;

    Vector2 transformGridtoCoord() const;

    Vector2 MoveOrigin(Vector2 vec) const;

public:
    [[maybe_unused]] Transformate(Vector2 Pozition, int GridSize, int ScreenHeight);

    [[maybe_unused]] Vector2 Modify();


};


#endif //SNAKE_TRANSFORM_H
