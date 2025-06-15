#include <iostream>
#include "Recorder.h"

void Recorder::Notify(float value)
{
	std::cout << "[RECORDER] " << value << '\n';
}
