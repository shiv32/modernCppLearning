#include "BillBoard.h"
#include "Recorder.h"
#include "SimpleDisplay.h"
#include "TemperatureSensor.h"

int main()
{
	system("clear && printf '\e[3J'"); // clean the terminal before output in linux

	TemperatureSensor sensor{};
	
	Billboard bb;
	SimpleDisplay sd;
	Recorder rd;

	sensor.Register(TemperatureChange::LARGE, &bb);
	sensor.Register(TemperatureChange::LARGE, &sd);
	sensor.Register(TemperatureChange::SMALL, &rd);

	sensor.SetTemp(21.3f);
	sensor.SetTemp(21.4f);
	sensor.SetTemp(22.5f);
	sensor.SetTemp(23.3f);
}
