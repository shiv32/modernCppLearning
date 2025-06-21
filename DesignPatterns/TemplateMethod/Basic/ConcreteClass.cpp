#include "ConcreteClass.h"
#include <iostream>
#include "AbstractClass.h"

void ConcreteClass::PrimitiveOperation1()
{
	std::cout << "Compulsory step 1\n";
}

void ConcreteClass::PrimitiveOperation2()
{
	std::cout << "Compulsory step 2\n";
}

void ConcreteClass::PrimitiveOperation3()
{
	AbstractClass::PrimitiveOperation3();
	std::cout << "Default optional step override\n";
}
