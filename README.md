# ESP-It
ESP cheat for Witch it, currently compatible with the latest version 1.6.0.3 (23225) for both the Steam and Epic Games version. Renders the player name above every player - including props/witches.

## How does it work
Basically just swaps the VMT entry for the UE5 PostRender function. In the hook we render the playername into the canvas for each pawn. It technically also enables the internal UE console which is neat if you want to dump GNames and what not.

## How to use it
Just inject the DLL (make sure you have the version that matches your launcher, see the "Build" section below) into the process once you're in the menu. You can use any injector (GH Injector, Cheat Engine, ...). The cheat will do it's thing automatically. Player's without orange name are the witches.  
Hit F2 In case you need the UE console as well.  

If you see `uwu we successfully hooked the post renderer owo` in the top left you know it worked.

## Proof or it didn't happen
![image](https://github.com/ioncodes/ESP-It/assets/18533297/f598b0cc-d3cf-400c-8852-5f86054bc57f)

## How to build
You should be able to just open the solution in Visual Studio and build it. The project defaults to the Steam version, if you need the Epic Games version built add the following line in `main.cpp`:
```c
#define EPIC_GAMES
```

## TODO
1. Wireframe? Draw lines or 2D box?
2. Draw only playernames for witches

However, I'm too lazy to implement these.
