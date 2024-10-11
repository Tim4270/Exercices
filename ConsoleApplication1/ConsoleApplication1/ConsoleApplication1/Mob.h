#ifndef Mob_h

#define Mob_h

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob: public Entity, public Alive, public AMovable {
public:
	Mob(float _x, float _y, float _MaxLife, float _Life, float _VectorDeplacementX, float _VectorDeplacementY);
};





#endif
