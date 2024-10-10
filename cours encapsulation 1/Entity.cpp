
#include "Entity.h"

Entity::Entity() : Position(0.f, 0.f){}

void Entity::SetPositionXY(float x, float y){
	Position.set_x(x);
	Position.set_y(y);
}

float Entity::GetPositionX()
{
	return Position.get_x();
}

float Entity::GetPositionY()
{
	return Position.get_y();
}
