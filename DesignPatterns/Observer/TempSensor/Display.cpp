#include <iostream>
#include "Display.h"

void Display::Notify(float value)
{
	std::cout << "Display ->" << value << '\n';
}
