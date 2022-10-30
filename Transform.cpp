//
// Created by Alin on 23/10/2022.
//

#include "Transform.h"

[[maybe_unused]] Transformate::Transformate(Vector2 Pozition, int GridSize, int ScreenHeight){
    poz = Pozition;
    grid = GridSize;
    height = ScreenHeight;


}
Vector2 Transformate::transformGridtoCoord() const {
    Vector2 rez1 = {grid * poz.x, grid * poz.y};
    return rez1;
}


Vector2 Transformate::MoveOrigin(Vector2 vec) const {

    Vector2 rez2 = {vec.x, height - vec.y };
    return rez2;
}

[[maybe_unused]] Vector2 Transformate::Modify(){
    Vector2 vector  = transformGridtoCoord();

    return MoveOrigin(vector);
}