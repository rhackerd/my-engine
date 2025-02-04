#include <fmt/core.h>
#include <string.h>
#include "./logy.h"
#include <cstdlib>

class Editor
{
    private:
    std::string code_executable;

    public:
    void open_file(std::string filename)
    {
        #ifdef _WIN32
            std::system(fmt::format("{} --reuse-window {}", code_executable, filename).c_str());
        #elif defined __linux__
            std::system(fmt::format("{} --reuse-window {}", code_executable, filename).c_str());
        #elif defined __APPLE__ && defined __MACH__
            Logy::Warning("Opening files on MacOS is not supported yet.");
            return;
        #endif
        Logy(fmt::format("Opening file: {}", filename).c_str());

    }
    void setExecutable(const std::string new_executable){code_executable=new_executable;}
    std::string getExecutable(){return code_executable;}
};
