#include "Entity.h"
#include "Alive.h"


#ifndef BreakableObject_h
#define BreakableObject_h



class BreakableObject : public Entity, public Alive {

	
public:
	BreakableObject(float _x, float _y, float _MaxLife, float _Life);
	virtual void TakeDamage(int _Damage) override;


};

#endif
