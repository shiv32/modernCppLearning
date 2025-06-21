#include <fstream>
#include <iostream>

#include "TextDocument.h"
#include "Numbers.h"

void Text()
{
	TextDocument text{};
	text.SetText("Hello there");
	text.Save();
	text.Load();
	// text.Save() ;
	/*text.SetText("Hello world") ;
	text.Save() ;*/
	// text.Close() ;
	text.Print();
}
int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	// Text() ;
	Numbers num{};
	// num.SetNumber(10) ;
	// num.Save() ;
	num.Load();
	num.Print();
}
