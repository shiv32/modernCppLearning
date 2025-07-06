#include <iostream>
#include <string>
#include <vector>

#include "Application.h"
#include "ConsoleLogger.h"
#include "DbLogger.h"
#include "FileLogger.h"

std::vector<Logger *> loggers{};

int main()
{

	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	Application app;

	app.RegisterLogger("FILE", new FileLogger{"applog.txt"});
	app.RegisterLogger("DB", new DbLogger{nullptr});

	app.OnStart();
	app.OnUserLogged();
	app.ExportFile();
	app.OnDataRequested();
	app.OnExit();
}
