# CUSTOMIZATION

## Things that will be customized here
1. *fonts*
2. *sounds*
3. *themes*

## Fonts
To customize the font, you can easily add a new font to `/font/` and implement it in the source code.

The code that you need to change is in `main.cpp` in `src` at lines 28, 39, 40, 41, 47, and 49
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

The current theme that is used by default is [catppuccin-frappe by catppuccin](https://github.com/catppuccin/catppuccin)
![](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/thumbnails/Screenshot%20from%202024-08-10%2013-53-48.png)

### available themes
The currently available themes are:
1. catppuccin/frappe
2. catppuccin/macchiato
3. catppuccin/mocha
4. catppuccin/latte
Sources are from [catppuccin](https://github.com/catppuccin/catppuccin).
Header files are in [`/themes/catppuccin/`](https://github.com/berakpaijo/Raylib-Tetris-pp/tree/main/themes/catppuccin)

### applying themes
To apply your desired themes, you can include them inside the colors header file, `include/colors.h`, by adding `#include "../themes/your theme"` to its first line. Then, at the line of the definition of a vector array function `GetAllColors()` you need to make the return value to an array of list of your themes color pallet.

### making your own themes
To make your own theme, simply make a `theme.h` file inside `/themes/`. Inside the `theme.h` file, you need to make a class that has the public attributes of your colors. For example:
```code
/* theme.h */
#pragma once
#include "../../include/raylib.h"

class mytheme{
  public:
  const Color Red = {255, 0, 0, 255};
  const Color Green = {0, 255, 0, 255};
  const Color Blue = {0, 0, 0, 255};
  const Color White = {255, 255, 255, 255};
  const Color Black = {0, 0, 0, 255};
};
```

Let's break down the code.

To start with, you need to make a header file for your theme. For example, `mytheme.h`. The header file must be made inside `/themes/`. Inside the header file, we want to make a class so variable calling won't crash when we call it inside `colors.h` in `/include/colors.h`. So then we made a class and named it `mytheme`. 

Here, is an example of the game after you changed the theme
![](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/thumbnails/Screenshot%20from%202024-08-10%2013-51-13.png)

In the class my theme, we want to have our colors as public attributes. So then we declare all our colors under the scope of `public`. To declare the colors, we need to include raylib. And so we did at the second line of our header file.

The data type `Color` is a data type from raylib that is used to declare a color variable. The value of a color variable must be an RGBA value. Meaning its value is a color. We wanted our theme to have various colors, so we declared several color variables. Now, we have every color that we want for our theme. Everything is all set.

Now, you can apply it to the game by including your theme header file in `/include/colors.h`. And voila, successfully changed the game theme
