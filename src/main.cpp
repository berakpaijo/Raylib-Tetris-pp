#include "../include/game.h"
#include "../include/raylib.h"
#include "game.cpp"
#include <cstdio>
#include <iostream>

Color Suface0 = Color{48, 52, 70, 255};
double lastUpdateTime = 0;

bool EventTriggered(double interval){
  double CurrentTime = GetTime();
  if (CurrentTime - lastUpdateTime >= interval){
    lastUpdateTime = CurrentTime;
    return true;
  };
  return false;
}

int main()
{
  const int screenWidth = 760;
  const int screenHeight = 835;

  InitWindow(screenWidth, screenHeight, "Tetris++ by LordPaijo");
  SetTargetFPS(120);

  Game game = Game();
  Font font = LoadFontEx("../font/Blox2.ttf", 64, 0, 0);

  while (!WindowShouldClose())
  {
    UpdateMusicStream(game.music);
    game.HandleInput();
    if (EventTriggered(0.230)) game.MoveBlockDown();

    BeginDrawing();
    ClearBackground(Suface0);

    DrawTextEx(font, "Score", {570,15}, 38, 2, WHITE);
    DrawTextEx(font, "Next", {575,175}, 38, 2, WHITE);
    if (game.gameOver) DrawTextEx(font, "GAME OVER", {560,485}, 40, 2, RED);

    char scoreText[10];
    sprintf(scoreText,"%d", game.score);
    Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);

    DrawTextEx(font, "Game by\nLordPaijo\n\nOn\ngithub.com/ \nberakpaijo", {570,screenHeight-200}, 28, 2, WHITE);
    DrawRectangleRounded({575, 65, 150, 60}, 0.3, 6, Surface0);
    DrawTextEx(font, scoreText, {570 + (170 - textSize.x)/2,75}, 38, 2, WHITE);
    DrawRectangleRounded({570, 225, 170, 180}, 0.3, 6, Surface0);
    
    game.Draw();

    EndDrawing();
  }

  CloseWindow();
  return 0;
}