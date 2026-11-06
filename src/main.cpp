#include <raylib.h>

int main()
{
    Color backgroundColor = {44, 44, 127, 255};

    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(backgroundColor);

        EndDrawing();
    }

    CloseWindow();
}