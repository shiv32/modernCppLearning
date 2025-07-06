#include <iostream>
#include "Winapp.hpp"
#include "FileLogger.hpp"
#include "DBLogger.hpp"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	FileLogger fileLogger{"applog.txt"};
	DBLogger dbLogger{};

	WinApp app{};

	app.RegisterLogger(&fileLogger);
	app.RegisterLogger(&dbLogger);

	app.OnStart();
	app.OnDataRequested();
	app.OnUserLoggedIn();
	app.OnFileModified();
	app.ExportFile();
	app.OnExit();
}
