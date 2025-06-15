#include <iostream>
#include "BillBoard.h"

void Billboard::Notify(float value)
{
	std::cout << "[BILLBOARD] " << value << '\n';
}
