# CUSTOMIZATION

## Things that will be customized here
1. *fonts*
2. *sounds*
3. *themes*

## Fonts
To customize the font, you can easily add a new font to `/font/` and implement it in the source code.

The code that you need to change is in `main.cpp` in `src` at lines 28
```code
Font font = LoadFontEx("../Font/your font", <your desired font size>, 0, 0); // line 28
```
then add the font to the function the uses the font.

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
To apply your desired themes, you can include them inside the colors header file, `include/colors.h`, by adding `#include "../themes/your theme"` to its first line. 

Then, at the line of the definition of a vector array function `GetAllColors()` you need to make the return value to an array of list of your themes color pallet.

### making your own themes
To make your own theme, simply make a header file consisting of your color pallet file inside `/themes/`. Inside your header file, you need to make a class that has the public attributes of your colors. 

For example:
```code
/* -_- */
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


Then include it in the `/themes/theme.h` file like this

```code
#pragma once
#include "../include/raylib.h"
#include "your theme.h"

your_class your_class_caller;

// Color palette
extern const Color GridC = <your_class_caller.your_color>;
extern const Color LBlockC = <your_class_caller.your_color>;
extern const Color JBlockC = <your_class_caller.your_color>;
extern const Color IBlockC = <your_class_caller.your_color>;
extern const Color OBlockC = <your_class_caller.your_color>;
extern const Color SBlockC = <your_class_caller.your_color>;
extern const Color TBlockC = <your_class_caller.your_color>;
extern const Color ZBlockC = <your_class_caller.your_color>;
extern const Color BaseC = <your_class_caller.your_color>;
```
then you're ready to go. `theme.h` is already included inside `/include/colors.h` so you don't have to worry about re-implementing your colors to the source code.

Here, is an example of the game after you changed the theme
![](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/thumbnails/Screenshot%20from%202024-08-10%2013-51-13.png)
