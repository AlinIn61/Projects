//
// Created by Alin on 30/10/2022.
//

#include "Timer.h"

void Timer::StartTimer(float lifetime) {
    Lifetime = lifetime;
}
void Timer::UpdateTimer() {
    if (Lifetime > 0) {
        Lifetime -= GetFrameTime();
    }
}
bool Timer::TimerDone() {
    return Lifetime <= 0;
}
