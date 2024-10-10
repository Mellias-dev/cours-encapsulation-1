#pragma once
class Alive
{	protected :
		float HPMax;
		float HP;
	public :
		Alive(float hpmax, float hp);
		virtual float GetHPMax();
		virtual float GetHP();
		virtual void TakeDamage(float damage);

};

