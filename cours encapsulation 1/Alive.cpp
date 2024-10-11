#include "Alive.h"

Alive::Alive(float hpmax, float hp) : HPMax (hpmax) , HP (hp){}

float Alive::GetHPMax()
{
	return HPMax;
}

float Alive::GetHP()
{
	return HP;
}

bool Alive::IsAlive()
{
	if (HP <= 0)
	{
		return false;
	}
}

void Alive::TakeDamage(float damage)
{
	HP -= damage;
}
