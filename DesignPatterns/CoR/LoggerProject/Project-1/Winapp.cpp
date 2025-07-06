#include "Winapp.hpp"

void WinApp::OnStart()
{
    m_Logger.Log("App started");
}

void WinApp::OnExit()
{
    m_Logger.Log("App exit");
}

void WinApp::ExportFile()
{
    // m_Logger.Log("App ExportFile");
    m_DBLogger.Log("App ExportFile");
}

void WinApp::OnUserLoggedIn()
{
    // m_Logger.Log("App OnUserLoggedIn");
    m_DBLogger.Log("App OnUserLoggedIn");
}

void WinApp::OnDataRequested()
{
    // m_Logger.Log("App OnDataRequested");
    m_DBLogger.Log("App OnDataRequested");
}

void WinApp::OnFileModified()
{
    m_Logger.Log("App OnFileModified");
}
