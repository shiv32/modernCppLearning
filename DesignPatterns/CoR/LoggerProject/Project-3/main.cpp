#include <iostream>
#include "Winapp.hpp"
#include "FileLogger.hpp"
#include "DBLogger.hpp"
#include "ConsoleLogger.hpp"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	FileLogger fileLogger{"applog.txt"};
	DBLogger dbLogger{};
	ConsoleLogger consoleLogger{};

	fileLogger.SetNextLogger(&dbLogger);
	dbLogger.SetNextLogger(&consoleLogger);

	WinApp app{};

	app.RegisterLogger(&fileLogger);

	app.OnStart();
	app.OnDataRequested();
	app.OnUserLoggedIn();
	app.OnFileModified();
	app.ExportFile();
	app.OnExit();
}
