#pragma once
// #include "FileLogger.hpp"
// #include "DBLogger.hpp"
#include <vector>
#include <string_view>

class Logger;

class WinApp
{
    // FileLogger m_Logger{"applog.txt"};
    // DBLogger m_DBLogger{};
    std::vector<Logger *> m_Loggers{};
    void Log(std::string_view message, std::string_view type);

public:
    void RegisterLogger(Logger *pLogger);
    void OnStart();
    void OnExit();
    void ExportFile();
    void OnUserLoggedIn();
    void OnDataRequested();
    void OnFileModified();
};