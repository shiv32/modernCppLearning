#include "FindDialog.h"
#include "MainWindow.h"

int main()
{
    system("clear && printf '\e[3J'"); // clean the terminal before output in linux

    MainWindow win{} ;
    FindDialog dlg{&win} ;

    dlg.SetSearchText("I") ;
    dlg.Find() ;
}
