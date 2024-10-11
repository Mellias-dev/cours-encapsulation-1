#pragma once
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <vector>
class World
{
protected :
	std::vector<Entity*> entities;
public :
	virtual void Init();
	virtual void Step();
};

