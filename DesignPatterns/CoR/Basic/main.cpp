#include <iostream>
#include <variant>
#include "Client.h"
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	ConcreteHandler2 ch2{nullptr};
	ConcreteHandler1 ch1{&ch2};

	ch2.Set(true);

	Client client;
	client.SetHandler(&ch1);
	client.Request();
}
