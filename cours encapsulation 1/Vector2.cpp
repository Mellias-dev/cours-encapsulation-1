#include "Vector2.h"

Vector2::Vector2(float x, float y) : _x (x), _y (y) {}

void Vector2::set_x(float x)
{
	_x = x;
}
void Vector2::set_y(float y)
{
	_y = y;
}
float Vector2::get_x()
{
	return _x;
}
float Vector2::get_y()
{
	return _y;
}
