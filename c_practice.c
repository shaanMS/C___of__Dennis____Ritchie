#include "raylib.h"

int main(void)
{
    InitWindow(800, 600, "My Interactive Window");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Hello Windows!", 300, 250, 30, BLACK);

        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
            DrawText("Clicked!", 350, 300, 25, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}