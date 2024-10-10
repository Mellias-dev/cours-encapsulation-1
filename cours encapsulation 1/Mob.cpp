#include "Mob.h"
#include <iostream>
Mob::Mob(float x, float y, float hpmax, float hp, Vector2 direction, float s) : Alive (hpmax, hp) , AMovable (direction, s)
{
	SetPositionXY(x, y);
	std::cout << " Mob just created at x = " << GetPositionX()
		<< " and y = " << GetPositionY() << " with maxlife = " << GetHPMax()
		<< " and actuallife = " << GetHP() << "with direction x = " << get_x()
		<< "and y = " << get_y () << std::endl;
}

void Mob::TakeDamage(float damage)
{
}

void Mob::Move(Vector2 direction, float s)
{
}
