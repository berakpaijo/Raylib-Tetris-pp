# Tetris++ v1.1.0
A full repository about my game, Tetris++.

![](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/thumbnails/Screenshot%20from%202024-08-10%2013-53-48.png)

This game is fully made using C++ and [Raylib](https://github.com/raysan5/raylib) that followed this [tutorial](https://youtu.be/wVYKG_ch4yM?si=1x-DJIYgIAAsy5pF) by [Programming With Nick](https://www.youtube.com/@programmingwithnick) on YouTube. I preferred him as my tutor for this project since he has the best explanations and tutorials among other YouTubers that I also followed a little. Since this project is a project that I followed from a tutorial, I won't be adding any licenses or funding towards me. This a full open project that might inspire you to go along and do the same thing as I did!

The current state is only available on [Linux](https://github.com/torvalds/linux)

## Raylib
Before compiling, you need to install [Raylib](https://github.com/raysan5/raylib) since it was the main library that I used to make this game.

A full installation guide is available [here](https://github.com/raysan5/raylib?tab=readme-ov-file#),

or use these links

[GNU / LINUX](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux),

[WINDOWS](https://github.com/raysan5/raylib/wiki/Working-on-Windows),

[MAC-OS / OS-X](https://github.com/raysan5/raylib/wiki/Working-on-macOS).

For GNU/Linux, I can give you a short installation guide, which I prefer. But for the others, I am not able since I haven't tried it on another os (I will, sooner or later)

```bash
git clone --depth 1 https://github.com/raysan5/raylib.git raylib
cd raylib/src/
make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=SHARED # To make the dynamic shared version.
sudo make install RAYLIB_LIBTYPE=SHARED # Dynamic shared version.
```
If that's done then you can go to the compiling

## Compiling and Running
I'm using GNU GCC/G++ to compile the game with the raylib within it.

### Compiling
```bash
git clone https://github.com/berakpaijo/Raylib-Tetris-pp.git Tetris++
cd Tetris++
cd src
g++ main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o ../compiled/Tetris++   # compiling the `main.cpp` to `/compiled/`
```

### Running
To run, all you have to do is execute the compiled file inside the directory `/compiled/`
```bash
cd ..
./compiled/Tetris++
```

If issues were found such as sound not playing, you can recompile the `main.cpp` in `src` and execute it without changing your directory back to `Tetris++/` and execute the compiled file.

```bash
cd src
g++ main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o ../compiled/Tetris++   # compiling the `main.cpp` to `/compiled/`
./../compiled/Tetris++
```

And there you have it, enjoy and have fun!

# Contributions
Before contributing to this project, you may read the [`CONTRIBUTION.md`](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/CONTRIBUTION.md) as rules and guidelines were written there.

# Version 1.1.0
Tetris++ now is officially updated to version 1.1.0

## What's new?
In this update, it added customizations to the game. This means now you can easily customize the game through the source code.

Things that you can customize are the font (dir `/font/`), sounds (dir `/sounds/`), and theme (dir `/themes/`).

For further documentation, you can read the [`CUSTOMIZATION.md`](https://github.com/berakpaijo/Raylib-Tetris-pp/blob/main/CUSTOMIZATION.md)
