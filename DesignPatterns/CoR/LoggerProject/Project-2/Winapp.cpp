#include "Winapp.hpp"
#include "Logger.hpp"

void WinApp::RegisterLogger(Logger *pLogger)
{
    m_Loggers.push_back(pLogger);
}

void WinApp::Log(std::string_view message, std::string_view type)
{
    for (auto logger : m_Loggers)
    {
        logger->Log(message, type);
    }
}

void WinApp::OnStart()
{
    // m_Logger.Log("App started");
    Log("OnStart", "FILE");
}

void WinApp::OnExit()
{
    // m_Logger.Log("App exit");
    Log("OnExit", "FILE");
}

void WinApp::ExportFile()
{
    // m_Logger.Log("App ExportFile");
    // m_DBLogger.Log("App ExportFile");
    Log("ExportFile", "DB");
}

void WinApp::OnUserLoggedIn()
{
    // m_Logger.Log("App OnUserLoggedIn");
    // m_DBLogger.Log("App OnUserLoggedIn");
    Log("OnUserLoggedIn", "DB");
}

void WinApp::OnDataRequested()
{
    // m_Logger.Log("App OnDataRequested");
    // m_DBLogger.Log("App OnDataRequested");
    Log("OnDataRequested", "DB");
}

void WinApp::OnFileModified()
{
    // m_Logger.Log("App OnFileModified");
    Log("OnFileModified", "FILE");
}
