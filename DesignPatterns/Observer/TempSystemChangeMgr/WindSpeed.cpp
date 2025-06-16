#include "WindSpeed.h"
#include <iostream>

void WindSpeed::SetSpeed(float speed)
{
	std::cout << "\n\n---------- WIND CHANGED ------------\n";
	m_Speed = speed;
	Notify();
}

std::string WindSpeed::GetType() const
{
	return "windspeed";
}

std::any WindSpeed::GetValue()
{
	return std::make_any<float>(m_Speed);
}
