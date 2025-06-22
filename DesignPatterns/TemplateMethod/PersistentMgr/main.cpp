#include <fstream>
#include <iostream>

#include "TextDocument.h"
#include "Numbers.h"

void Text()
{
	TextDocument text{};

	// text.SetText("Hello there");
	// text.Save();

	text.Load();

	text.Print();
}

void Num()
{
	Numbers num{};

	// num.SetNumber(10) ;
	// num.Save() ;

	num.Load();

	num.Print();
}

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	Text();
	// Num();
}
