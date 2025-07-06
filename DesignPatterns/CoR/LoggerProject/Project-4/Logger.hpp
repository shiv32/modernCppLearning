#pragma once
#include <string_view>
#include <iostream>

class Logger
{
    Logger *m_pNext{};

public:
    void SetNextLogger(Logger *pLogger)
    {
        m_pNext = pLogger;
    }

    // virtual void Log(std::string_view message, std::string_view type) = 0
    virtual void Log(std::string_view message, std::string_view type)
    {
        // if (m_pNext)
        // {
            m_pNext->Log(message, type);
        //}
        // else
        // {
        //     std::cout << "No logger available !" << std::endl;
        // }
    };

    virtual ~Logger() = default;
};