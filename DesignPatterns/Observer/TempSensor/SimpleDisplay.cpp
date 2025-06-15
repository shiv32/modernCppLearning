#include <iostream>
#include "SimpleDisplay.h"

void SimpleDisplay::Notify(float value)
{
	std::cout << "[SIMPLEDISPLAY] " << value << '\n';
}
