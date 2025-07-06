#include <iostream>
#include "Winapp.hpp"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	WinApp app{};
	
	app.OnStart();
	app.OnDataRequested();
	app.OnUserLoggedIn();
	app.OnFileModified();
	app.ExportFile();
	app.OnExit();
}
