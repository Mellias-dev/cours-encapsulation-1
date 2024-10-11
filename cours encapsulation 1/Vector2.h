#pragma once
class Vector2
{
	private :
		float _x, _y;
	public :
		Vector2(float,float);
		void set_x(float x);
		void set_y(float y);
		float get_x() const;
		float get_y() const;

		Vector2 operator+(const Vector2& _rigth);

};

