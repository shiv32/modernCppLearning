#pragma once
#include <string_view>
#include "Logger.hpp"

class DBLogger : public Logger
{
public:
    void Log(std::string_view message, std::string_view type) override;
};