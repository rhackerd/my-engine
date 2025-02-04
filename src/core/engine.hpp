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

    bool shouldClose();
};

Engine::Engine()
{
}

bool Engine::shouldClose()
{
    return WindowShouldClose();
}

void Engine::init()
{
    // Initialization logic
}

Engine::~Engine()
{

}

void Engine::draw()
{
    BeginDrawing();
    graphics.draw();
    ui.draw();
    EndDrawing();
}

void Engine::event()
{
    graphics.event();
    ui.event();
}

void Engine::startContext()
{
    graphics.setConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT | FLAG_MSAA_4X_HINT);
    graphics.createWindow();
    graphics.setFPS(180);

    ui.startContext();
}