
#ifndef Integer_h
#define Integer_h

class Integer {

	

public:
	int var;


	Integer();
	Integer(int _var);

	Integer operator+(const Integer& _right);
	Integer operator+=(const Integer& _right);
	Integer operator-(const Integer& _right);
	Integer operator-=(const Integer& _right);
	Integer operator*(const Integer& _right);
	Integer operator*=(const Integer& _right);
	Integer operator/(const Integer& _right);
	Integer operator/=(const Integer& _right);
	Integer operator%(const Integer& _right);
	Integer operator%=(const Integer& _right);
	Integer operator<<(const Integer& _right);


};




#endif



