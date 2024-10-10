#pragma once
#include "Vector2.h"
#include "Entity.H"
class AMovable
{
	protected:
		Vector2 Direction;
		float Speed;
	public:
		AMovable(Vector2 direction, float s);
		virtual void SetDirection(Vector2 direction);
		virtual void SetSpeedS(float s);
		virtual void Move(Vector2 direction, float s);
};