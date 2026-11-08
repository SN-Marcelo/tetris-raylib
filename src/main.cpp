#include <raylib.h>
#include "game.h"

int main()
{
    Color backgroundColor = {44, 44, 127, 255};

    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose())
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(backgroundColor);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}