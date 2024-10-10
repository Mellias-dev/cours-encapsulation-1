#include "AMovable.h"

AMovable::AMovable(Vector2 direction, float s) : Direction (direction) , Speed(s){}

void AMovable::SetDirection(Vector2 direction)
{
	Direction.set_x(direction.get_x());
	Direction.set_y(direction.get_y());
}

void AMovable::SetSpeedS(float s)
{
	Speed = s;
}

void AMovable::Move(Vector2 direction, float s)
{
}
