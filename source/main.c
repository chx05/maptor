#include "libs/raylib/include/raylib.h"
#include "base.h"

int32_t main()
{
    const int32_t screenWidth = 800;
    const int32_t screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Maptor [beta]");

    SetTargetFPS(0);

    const Font font = LoadFontEx("res/3270_regular.ttf", 50, NULL, 0);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            // Logic

            ClearBackground((Color) { .r=32,.g=32,.b=32,.a=-1 });

            Color text_color = { .r=242,.g=242,.b=242,.a=215 };

            if (IsKeyDown(KEY_SPACE))
                text_color.a = 125;

            //DrawFPS(20, 20);
            DrawTextEx(font, "foo: u8 = 10", (Vector2) { .x = 200, .y = 20 }, 50, 2, text_color);
        }
        EndDrawing();
    }

    UnloadFont(font);
    CloseWindow();

    return 0;
}