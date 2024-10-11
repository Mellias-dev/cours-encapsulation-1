#include "Mob.h"
#include <iostream>

Mob::Mob(float x, float y, float hpmax, float hp, Vector2 direction, float s) : Alive (hpmax, hp) , AMovable (direction, s) , Vector2(x,y), Entity (Vector2(x,y))
{
	std::cout << " Mob just created at x = " << GetPositionX() << " and y = " << GetPositionY() << " with maxlife = " << GetHPMax() << " and actuallife = " << GetHP() << " with direction x = " << direction.get_x() << " and y = " << direction.get_y () << std::endl;
}

void Mob::TakeDamage(float damage)
{
	HP -= damage;
	if (HP <= 0)
	{
		std::cout << " Mob just died " << std::endl;
	}
}

void Mob::Move(Vector2 direction, float s)
{
	Vector2 newpos (direction.get_x() * s + get_x (), direction.get_y() * s + get_y());
	std::cout << " Mob move to x = " << newpos.get_x() << " and y = " << newpos.get_y() << std::endl;
	direction = newpos;
}
