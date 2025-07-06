#include "FileLogger.h"
#include <iostream>

void FileLogger::Log(std::string_view message, std::string_view type)
{
	if (type == "FILE")
	{
		std::cout << "[FL] log\n";
		m_Stream << message << '\n';
		m_Stream.flush();
	}
	else if (m_pNext)
	{
		std::cout << "[FL] Forwarding\n";
		m_pNext->Log(message, type);
	}
	else
	{
		std::cout << "[FL] Unable to log\n";
	}
}
