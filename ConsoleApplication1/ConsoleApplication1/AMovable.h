#include "Vector2.h"
#ifndef AMovable_h
#define AMovable_h



class AMovable {
protected:
	Vector2 Direction;
public:
	float speed;
	AMovable(Vector2 _Direction, float _speed);
	virtual void SetDirection(float _x, float _y);
	virtual void SetSpeed(float _speed);
	virtual void Move() = 0;


};








#endif