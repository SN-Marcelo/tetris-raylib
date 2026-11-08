#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    Color backgroundColor = {44, 44, 127, 255};

    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    IBlock block = IBlock();

    

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(backgroundColor);
        grid.Draw();
        block.Draw();

        EndDrawing();
    }

    CloseWindow();
}