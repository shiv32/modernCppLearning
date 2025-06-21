#include <fstream>
#include <iostream>

#include "Numbers.h"
#include "TextDocument.h"

void Text()
{
	TextDocument text{};
	text.SetText("Hello there");
	text.Save();
	text.SetText("Hello world");
	text.Save();
	text.Print();
}

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	Numbers num{};
	// num.SetNumber(10) ;
	// num.Save() ;
	num.Load();
	num.Print();
}
