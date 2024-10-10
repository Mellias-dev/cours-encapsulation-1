#include "StaticObject.h"
#include <iostream>
StaticObject::StaticObject(float x , float y)
{
	SetPositionXY(x, y);
	std::cout << " Static Object just created at x = " << GetPositionX() << " and y = " << GetPositionY() << std::endl;
}
