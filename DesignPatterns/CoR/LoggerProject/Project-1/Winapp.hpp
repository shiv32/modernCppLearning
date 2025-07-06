#pragma once
#include "FileLogger.hpp"
#include "DBLogger.hpp"

class WinApp
{
    FileLogger m_Logger{"applog.txt"};
    DBLogger m_DBLogger{};

public:
    void OnStart();
    void OnExit();
    void ExportFile();
    void OnUserLoggedIn();
    void OnDataRequested();
    void OnFileModified();
};