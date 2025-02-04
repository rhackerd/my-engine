#include "ui.h"

UI::UI()
{
}

UI::~UI()
{
}

void UI::draw()
{
    rlImGuiBegin();
    ImGui::ShowDemoWindow();
    rlImGuiEnd();
}

void UI::event()
{
}

void UI::startContext()
{
    rlImGuiSetup(true);
}

void UI::init()
{
    // InitImGui();
}