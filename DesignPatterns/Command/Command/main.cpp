#include "Invoker.h"
#include "Receiver.h"
#include "ConcreteCommand.h"
#include <iostream>

int main()
{
    system("clear && printf '\e[3J'"); // clean the terminal before output in linux

    Receiver receiver{} ;
    ConcreteCommand cmd{&receiver};
	Invoker invoker{} ;
    invoker.SetCommand(&cmd) ;
	invoker.Invoke() ;

    return 0;
}
