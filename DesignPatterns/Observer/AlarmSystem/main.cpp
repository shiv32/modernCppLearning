#include <iostream>
#include <vector>

#include "Alarm.h"
#include "HeavyGunner.h"
#include "Soldier.h"
#include "Tank.h"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	Alarm alarm{};
	
	Soldier soldier{&alarm};
	HeavyGunner heavyGunner{&alarm};
	Tank tank{&alarm};

	alarm.SetAlarmOn();
}
