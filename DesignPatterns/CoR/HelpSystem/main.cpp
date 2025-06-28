#include "Button.h"
#include "LocalHelp.h"
#include "OnlineHelp.h"
#include "QuickHelp.h"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	OnlineHelp online{};
	LocalHelp local{};
	QuickHelp quick{};

	quick.SetSuccessor(&local);
	local.SetSuccessor(&online);

	Button btn;
	btn.SetHelpHandler(&quick);
	
	btn.RequestHelp("settings");
	//btn.RequestHelp("options");
	//btn.RequestHelp("color");
}
