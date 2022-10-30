#include "Transform.h"
#include "global.h"
#include "Collision.h"
#include "Timer.h"
#include "FoodGen.h"
#include "Checks.h"
#include "SnakeMethods.h"
#include "Draw.h"

#include <cstring>
#include <raylib.h>


using namespace std;

Snake snake[1000];
Vector2 food;

class initGame {
private:
    SnakeMethods createSnake;
    Timer timer1;
    Timer timer2;

    int count = 0;
    bool drawFlag = true;

    void reset() {
        memset(snake, 0, sizeof(snake));
        snakeLenght = 1;
        createSnake.init(snake);
        gameOver = false;

    }

    void updateGame() {
        createSnake.Move(snake);
        Checks::checkBoundary(snake);
        Checks::collisionwithHims(snake);
        createSnake.increaseSize(snake, food);

    }
public:
    void init() {
        timer1.StartTimer(0.2f);
        timer2.StartTimer(0.5f);

        createSnake.init(snake);

        FoodGen::init(snake, food);

        InitWindow(screenWidth, screenHeight, "Snake");
        SetTargetFPS(60);
        while (!WindowShouldClose()) {
            Draw::drawGame(drawFlag, snake, food);
            if (!gameOver)
            {
                if (IsKeyPressed('P')) pause = !pause;

                if (!pause) {
                    Checks::checkifPressed(snake);
                    if (timer1.TimerDone()) {
                        updateGame();
                        timer1.StartTimer(0.2f);
                    }
                    timer1.UpdateTimer();
                }

            }
            else {
                timer2.UpdateTimer();
                if (timer2.TimerDone() && count>=5) {
                    reset();
                }

                if (timer2.TimerDone()) {
                    count++;
                    timer2.StartTimer(0.2f);
                    drawFlag = !drawFlag;
                }

            }

        }
    }
};



int main()
{
    initGame game;
    game.init();

    return 0;
}



