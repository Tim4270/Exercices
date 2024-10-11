
#ifndef Alive_h
#define Alive_h

class Alive {

protected:
	float MaxLife;
	float Life;


public:

	Alive();
	Alive(float _Life, float _MaxLife);
	virtual void SetLife(int _Life);
	virtual void SetMaxLife(int _MaxLife);
	virtual int GetMaxLife();
	virtual int GetLife();
	virtual void TakeDamage(int _Damage);

};



#endif
