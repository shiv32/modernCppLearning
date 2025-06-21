#include "AbstractClass.h"
#include <iostream>

void AbstractClass::PrimitiveOperation3()
{
	std::cout << "Default optional step\n";
}

void AbstractClass::PrimitiveOperation4()
{
	std::cout << "Fixed step\n";
}

void AbstractClass::TemplateMethod()
{
	// varying step
	PrimitiveOperation1();
	PrimitiveOperation2();

	// optional step (hook)
	PrimitiveOperation3();

	// fixed step
	PrimitiveOperation4();
}
