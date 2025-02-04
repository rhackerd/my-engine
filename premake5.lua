workspace "cpp-fmt-project"
   configurations { "Debug", "Release" }

project "Core"
   kind "StaticLib"
   language "C++"
   files { "src/core/**.cpp", "src/core/**.hpp", "rlImGui/*.h", "rlImGui/*.cpp" }
   includedirs { "src/core", "rlImGui" }  -- Ensure rlImGui is included for Core as well

project "App"
   kind "ConsoleApp"
   language "C++"
   links { "fmt", "Core", "rlImGui", "raylib" }
   files { "src/app/*.cpp", "src/app/*.hpp" }
   includedirs { "src/core", "rlImGui" }
   libdirs { "rlImGui/bin/Debug" }
