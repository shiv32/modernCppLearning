#pragma once
#include <fstream>
#include "Logger.hpp"

class FileLogger : public Logger
{
    std::ofstream m_OutStrteam{};

public:
    FileLogger(std::string_view filename) : m_OutStrteam{filename.data()} {};
    void Log(std::string_view message, std::string_view type);
};