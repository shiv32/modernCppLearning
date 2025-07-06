#include "FileLogger.hpp"
#include <iostream>

void FileLogger::Log(std::string_view message, std::string_view type)
{
    if (type == "FILE")
        m_OutStrteam << message << std::endl;
    else
        Logger::Log(message, type);
}
