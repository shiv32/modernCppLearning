#include "NullLogger.hpp"

void NullLogger::Log(std::string_view message, std::string_view type)
{
    std::cout << "[NULLLOGGER] No logger available !" << std::endl;
}