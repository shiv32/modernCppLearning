#include <iostream>
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux
	
	ConcreteSubject subject{};
	ConcreteObserver co1{&subject};
	ConcreteObserver co2{&subject};

	subject.Attach(&co1);
	subject.Attach(&co2);

	std::cout << "Changing state in the subject...\n";
	subject.SetState("C++");
}
