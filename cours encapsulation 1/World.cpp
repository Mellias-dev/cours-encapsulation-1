#include "World.h"
#include <vector>
#include <iostream>
void World::Init()
{
	entities.push_back(new StaticObject(1, 1));
	entities.push_back(new BreakableObject (2, 2, 1, 1));
	entities.push_back(new Mob (3, 3, 20, 20, Vector2(5, 1), 1));
	entities.push_back(new Player (4, 4, 10, 10, Vector2(4, 1), 2));
}

void World::Step()
{
	for (Entity* emob : entities)
	{
		if (dynamic_cast <Mob*> (emob))
		{
			for (Entity* ebo : entities)
			{
				if (dynamic_cast <BreakableObject*> (ebo))
				{

				}

			}


			
		}
			
	}
	for (Entity* eplayer : entities)
	{
		if (dynamic_cast <Player*> (eplayer))
		{
			for (Entity* emob1 : entities)
			{
				if (dynamic_cast <Mob*> (emob1))
				{
					
				}
			}
		}
	}
	for (Entity* emob2 : entities)
	{
		if (dynamic_cast <Mob*> (emob2))
		{
			for (Entity* ebo1 : entities)
			{
				if (dynamic_cast <BreakableObject*> (ebo1))
				{
					bool mortmob = dynamic_cast<Mob*> (emob2)->IsAlive();
					bool mortbo = dynamic_cast<BreakableObject*> (ebo1)->IsAlive();
					if (mortmob == false and mortbo == false)
					{
						std::cout << "Simulation Finished" << std::endl;
					}
				}
			}
		}
	}
}
