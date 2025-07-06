#include "Winapp.hpp"
#include "Logger.hpp"

void WinApp::RegisterLogger(Logger *pLogger)
{
    // m_Loggers.push_back(pLogger);

    m_pLogger = pLogger;
}

// void WinApp::Log(std::string_view message, std::string_view type)
// {
//     for (auto logger : m_Loggers)
//     {
//         logger->Log(message, type);
//     }
// }

void WinApp::OnStart()
{
    // m_Logger.Log("App started");
    // m_pLogger->Log("OnStart", "FILE");
    m_pLogger->Log("OnStart", "CONSOLE");
}

void WinApp::OnExit()
{
    // m_Logger.Log("App exit");
    // m_pLogger->Log("OnExit", "FILE");
    m_pLogger->Log("OnExit", "CONSOLE");
}

void WinApp::ExportFile()
{
    // m_Logger.Log("App ExportFile");
    // m_DBLogger.Log("App ExportFile");
    m_pLogger->Log("ExportFile", "DB");
}

void WinApp::OnUserLoggedIn()
{
    // m_Logger.Log("App OnUserLoggedIn");
    // m_DBLogger.Log("App OnUserLoggedIn");
    m_pLogger->Log("OnUserLoggedIn", "DB");
}

void WinApp::OnDataRequested()
{
    // m_Logger.Log("App OnDataRequested");
    // m_DBLogger.Log("App OnDataRequested");
    m_pLogger->Log("OnDataRequested", "DB");
}

void WinApp::OnFileModified()
{
    // m_Logger.Log("App OnFileModified");
    m_pLogger->Log("OnFileModified", "FILE");
}
