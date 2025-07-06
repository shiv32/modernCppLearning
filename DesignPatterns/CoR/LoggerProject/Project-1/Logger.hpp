#pragma once
#include <string_view>

class Logger
{
public:
    virtual void Log(std::string_view message) = 0;
    virtual ~Logger() = default;
};