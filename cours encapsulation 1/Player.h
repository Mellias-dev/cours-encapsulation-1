#pragma once
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
class Player : public Entity, public Alive, public AMovable, public IAttacker, public Vector2
{
	public :
		Player(float x, float y, float hpmax, float hp, Vector2 direction, float s);
		virtual void TakeDamage(float damage) override;
		virtual void Move(Vector2 direction, float s) override;
		virtual void Attack(Alive& chose, float damage) override;

};

