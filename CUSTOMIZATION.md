# CUSTOMIZATION

## Things that will be customized here
1. *fonts*
2. *sounds*
3. *themes*

## Fonts
To customize the font, you can easily add a new font to `/font/` and implement it to the source code.

The code that you need to change is in `main.cpp` in `src` at line 28, 39, 40, 41, 47, and 49
```code
Font font = LoadFontEx("../Font/your font", <your desired font size>, 0, 0); // line 28
DrawTextEx(font, "Score", {<x position (default is 570)>,<y position (default 15)>}, <your text size>, 2, WHITE); // line 39
DrawTextEx(font, "Next",  {<x position (default is 575)>,<y position (default 175)>}, <uour text size>, 2, WHITE); // line 40
if (game.gameOver) DrawTextEx(font, "GAME OVER", {<x position (default is 560)>,<y position (default is 485)>}, <your text size>, 2, RED); // line 41
DrawTextEx(font, "Game by\nLordPaijo\n\nOn\ngithub.com/ \nberakpaijo",  {<x position (default is 570)>,<y position (default is 635)>}, <your text size>, 2, WHITE); // line 47
DrawTextEx(font, scoreText, {<x position (default is 570)> + (170 - textSize.x)/2,<y position (default is 75)>}, <your text size>, 2, WHITE); // line 49
```
And there you have it, font successfully changed.

## Sounds
Sounds can be easily changed inside the `/sounds/` directory, and can implemented inside the `game.cpp` in `src` by changing the `LoadMusicStream("file name")` and or `LoadSound("file name")`

## Themes
Themes can be configured inside [`/themes/`](https://github.com/berakpaijo/Raylib-Tetris-pp/tree/main/themes) by adding a new `theme.h` file.

![The current theme that is used by default is [catppuccin-frappe by catppuccin](https://github.com/catppuccin/catppuccin)](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/thumbnails/Screenshot%20from%202024-08-10%2013-53-48.png)
