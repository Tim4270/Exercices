#include "Vector2.h"


#ifndef Entity_h
#define Entity_h


class Entity 
{
	protected:
		Vector2 Position;
	public:
		Entity();
		virtual float GetEntityX();
		virtual float GetEntityY();
		virtual	void SetPosition(float _x, float _y);
		

};



#endif