//
// Created by Alin on 30/10/2022.
//

#ifndef SNAKE_TIMER_H
#define SNAKE_TIMER_H

#include <raylib.h>


class Timer {
private:
    float Lifetime = 0;
public:
    void StartTimer(float lifetime);

    void UpdateTimer();

    bool TimerDone();

};

#endif //SNAKE_TIMER_H
