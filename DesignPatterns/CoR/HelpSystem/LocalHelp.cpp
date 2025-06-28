#include "LocalHelp.h"

void LocalHelp::ShowHelp(const std::string &topic)
{
	if (topic == "options")
	{
		std::cout << "[LocalHelp] Save options\n";
	}
	else
	{
		HelpHandler::ShowHelp(topic);
	}
}
