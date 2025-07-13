#include "ConcreteCommand.h"
#include "Receiver.h"

ConcreteCommand::ConcreteCommand(Receiver* mPReceiver): m_pReceiver{mPReceiver}
{
}

void ConcreteCommand::Execute()
{
    m_pReceiver->Action() ;
}
