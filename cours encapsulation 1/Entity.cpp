
#include "Entity.h"

Entity::Entity(Vector2 position) : Position(position) {}

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
