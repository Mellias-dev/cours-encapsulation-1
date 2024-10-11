#include "Player.h"
#include <iostream>

Player::Player(float x, float y, float hpmax, float hp, Vector2 direction, float s) : Vector2(x,y) , Entity (Vector2(x,y)) , Alive(hpmax, hp), AMovable(direction, s)
{
	std::cout << " Player just created at x = " << GetPositionX() << " and y = " << GetPositionY() << " with maxlife = " << GetHPMax() << " and actuallife = " << GetHP() << " with direction x = " << direction.get_x() << " and y = " << direction.get_y() << std::endl;
}

void Player::TakeDamage(float damage)
{
	HP -= damage;
	if (HP <= 0)
	{
		std::cout << " Player just died " << std::endl;
	}
}

void Player::Move(Vector2 direction, float s)
{
	Vector2 newpos(direction.get_x() * s + get_x(), direction.get_y() * s + get_y());
	std::cout << " Player move to x = " << newpos.get_x() << " and y = " << newpos.get_y() << std::endl;
	direction = newpos;
}

void Player::Attack(Alive& chose, float damage)
{
	std::cout << " Player just attacked " << std::endl;
	chose.TakeDamage(damage);
}
