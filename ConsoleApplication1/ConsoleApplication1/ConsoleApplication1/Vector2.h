#include <string>
#ifndef Vector2_h
#define Vector2_h

class Vector2
{
	float x;
	float y;

public:
	Vector2();
	Vector2(float _x, float _y);
	float GetVector2X();
	float GetVector2Y();
	void SetPosition(float _x, float _y);
	void SetPosition(std::string _xStr, std::string _yStr);


	Vector2 operator+(const Vector2& _right);
};

#endif