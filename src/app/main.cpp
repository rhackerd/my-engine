#include "main.hpp"
#include <engine.hpp>
#include <fmt/core.h>

int main() {
    Engine engine;
    engine.init();


    fmt::print("Welcome to the application!\n");
    engine.startContext();
    while (!engine.shouldClose()) {
        engine.draw();
        engine.event();
    }

    return 0;
}