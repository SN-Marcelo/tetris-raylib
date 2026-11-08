#include <raylib.h>
#include "grid.h"

int main()
{
    Color backgroundColor = {44, 44, 127, 255};

    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 5;

    grid.Print();

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(backgroundColor);
        grid.Draw();

        EndDrawing();
    }

    CloseWindow();
}