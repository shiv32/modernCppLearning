#include "DBLogger.hpp"
#include <iostream>

void DBLogger::Log(std::string_view message)
{
    std::cout << "[DB]" << message << std::endl;
}