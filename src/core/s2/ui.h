#ifndef UI_H
#define UI_H

#include <imgui.h>
#include <rlImGui.h>
#include <imgui_impl_raylib.h>
#include <raylib.h>

class UI
{
private:
    RenderTexture2D renderTexture;
    bool showProperties = true;
    bool showNodes = true;
    bool showConsole = true;
    bool showPreview = true;
    bool showFiles = true;
    ImGuiIO io;
    ImFont* font;

public:
    UI();
    ~UI();

    void draw();
    void drawOutside();
    void event();
    void startContext();
    void init();

    RenderTexture2D getRenderTexture();
    

};

#endif