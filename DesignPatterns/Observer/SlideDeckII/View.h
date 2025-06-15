#pragma once
#include <iostream>

class View
{
public:
	virtual void Display(size_t index) = 0 ;
	virtual ~View()=default ;
};

