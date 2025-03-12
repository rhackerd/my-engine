#include "engine.hpp"
#include <fmt/core.h>


Engine::Engine() : renderTexture()
{
    
}



bool Engine::shouldClose()
{
    return WindowShouldClose();
}

void Engine::init()
{
    renderTexture = LoadRenderTexture(GetScreenWidth(), GetScreenHeight());
}

Engine::~Engine()
{

}

void Engine::onWindowResize() {
    UnloadRenderTexture(renderTexture); // Free the old texture
    renderTexture = LoadRenderTexture(GetScreenWidth(), GetScreenHeight()); // Load new texture
}


void Engine::draw()
{
    //graphics.renderToTexture(ui.getRenderTexture());


        
    if (!(IsWindowFocused())) return;
    BeginDrawing();
    graphics.draw();
    ui.draw();
    EndDrawing();
}

void Engine::event()
{
    // check if window is resized
    if(IsWindowResized()) onWindowResize();

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