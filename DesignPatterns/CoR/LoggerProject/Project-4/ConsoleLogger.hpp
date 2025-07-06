#pragma once
#include "Logger.hpp"

class ConsoleLogger : public Logger
{

public:
    void Log(std::string_view message, std::string_view type) override;
};