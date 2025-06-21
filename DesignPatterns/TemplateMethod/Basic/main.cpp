#include "ConcreteClass.h"
#include <iostream>

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	ConcreteClass cc{};
	cc.TemplateMethod();
}
