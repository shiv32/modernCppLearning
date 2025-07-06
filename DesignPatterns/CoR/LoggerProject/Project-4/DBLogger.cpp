#include "DBLogger.hpp"
#include <iostream>

void DBLogger::Log(std::string_view message, std::string_view type)
{
    if (type == "DB")
        std::cout << "[DB]" << message << std::endl;
    else
        Logger::Log(message, type);
}