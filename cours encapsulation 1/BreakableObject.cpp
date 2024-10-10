#include "BreakableObject.h"
#include <iostream>
BreakableObject::BreakableObject(float x, float y, float hpmax, float hp) : Alive (hpmax , hp )
{
	SetPositionXY(x, y);
	std::cout << " Breakable Object just created at x = " << GetPositionX() 
		<< " and y = " << GetPositionY() << " with maxlife = "<< GetHPMax()
		<< " and actuallife = " << GetHP() << std::endl;
}

void BreakableObject::TakeDamage(float damage)
{
	if (GetHP() <= 0)
	{
		std::cout << " Breakable Object just broke " << std::endl;
	}
}
