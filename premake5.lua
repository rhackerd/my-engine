workspace "cpp-fmt-project"
   configurations { "Debug", "Release" }

project "Core"
   kind "StaticLib"
   language "C++"
   files { "src/core/**.cpp", "src/core/**.hpp" }

project "App"
   kind "ConsoleApp"
   language "C++"
   links { "fmt" }
   files { "src/app/*.cpp", "src/app/*.hpp" }
   links { "Core" }