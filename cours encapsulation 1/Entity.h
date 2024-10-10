#ifndef ENTITY_H__
#define ENTITY_H__
#include "Vector2.h"
class Entity
{	protected :
		Vector2 Position;
	public :
		Entity();
		virtual void SetPositionXY(float x,float y);
		virtual float GetPositionX();
		virtual float GetPositionY();
};
#endif