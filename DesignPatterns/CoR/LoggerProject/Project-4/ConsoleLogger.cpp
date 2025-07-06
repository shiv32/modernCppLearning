#include "ConsoleLogger.hpp"

void ConsoleLogger::Log(std::string_view message, std::string_view type)
{
    if (type == "CONSOLE")
    {
        std::cout << "[CONSOLE]" << message << std::endl;
    }
    else
    {
        Logger::Log(message, type);
    }
}