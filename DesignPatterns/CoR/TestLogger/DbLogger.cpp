#include "DbLogger.h"

#include <iostream>

void DbLogger::Log(std::string_view message, std::string_view type)
{
	// if (type == "DB")
	// {
	// 	std::cout << "[DbLogger]" << message << '\n';
	// }
	// else if (m_pNext)
	// {
	// 	std::cout << "[DB] Forwarding\n";
	// 	m_pNext->Log(message, type);
	// }
	// else
	// {
	// 	std::cout << "Unable to log db\n";
	// }

		std::cout << "[DbLogger]" << message << '\n';
}
void DbLogger::Log(std::string_view message)
{
	Log(message, "DB");
}
