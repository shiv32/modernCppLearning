#include "BillBoard.h"
#include <iostream>

void Billboard::Notify(float value)
{
	std::cout << "[BILLBOARD] " << value << '\n';
}
