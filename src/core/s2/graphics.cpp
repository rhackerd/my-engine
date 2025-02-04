#include "graphics.h"

Graphics::Graphics()
{
    background_color = RAYWHITE;
}

Graphics::~Graphics()
{
}


void Graphics::draw()
{
    ClearBackground(background_color);
}

void Graphics::event()
{
}

void Graphics::createWindow()
{
    InitWindow(800, 450, "Context Window");
}

void Graphics::setClearColor(Color color)
{
    background_color = color;
}

void Graphics::setWindowTitle(const char* title)
{
    SetWindowTitle(title);
}

void Graphics::setFPS(int fps)
{
    SetTargetFPS(fps);
}

void Graphics::setWindowSize(int width, int height)
{
    SetWindowSize(width, height);
}


void Graphics::setWindowPosition(int x, int y)
{
    SetWindowPosition(x, y);
}


void Graphics::setWindowIcon(const char *fileName)
{
    SetWindowIcon(LoadImage(fileName));
}

void Graphics::setVsync(bool vsync)
{
    SetConfigFlags(FLAG_VSYNC_HINT);
}

int Graphics::getFPS()
{
    return GetFPS();
}

int Graphics::getWindowWidth()
{
    return GetScreenWidth();
}

int Graphics::getWindowHeight()
{
    return GetScreenHeight();
}

Vector2 Graphics::getWindowSize()
{
    return Vector2{static_cast<float>(GetScreenWidth()), static_cast<float>(GetScreenHeight())};
}

Vector2 Graphics::getWindowPosition()
{
    return GetWindowPosition();
}

Color Graphics::getClearColor()
{
    return background_color;
}

void Graphics::setConfigFlags(unsigned flags)
{
    SetConfigFlags(flags);
}