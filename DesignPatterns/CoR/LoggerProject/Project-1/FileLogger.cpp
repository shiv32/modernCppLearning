#include "FileLogger.hpp"

void FileLogger::Log(std::string_view message) 
{
    m_OutStrteam<< message <<std::endl;
}