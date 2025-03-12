#ifndef ENGINE_H
#define ENGINE_H

#include "s2/ui.h"
#include "s2/graphics.h"

class Engine
{
private:
    UI ui;
    Graphics graphics;

public:
    Engine();
    ~Engine();

    void draw();
    void event();
    void startContext();
    void init();

    // events
    void onWindowResize();

    bool shouldClose();

    RenderTexture renderTexture;
};

#endif