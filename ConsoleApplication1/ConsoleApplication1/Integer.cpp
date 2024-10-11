#include "Integer.h"
#include <iostream>
#include <string>






Integer::Integer() : var(0)
{

}

Integer::Integer(int _var) : var(_var)
{
}

Integer Integer::operator+(const Integer& _right)
{
	Integer tmp(this->var + _right.var);
	return tmp;
}

Integer Integer::operator+=(const Integer& _right)
{
	this->var = this->var + _right.var;
	return this->var;
}

Integer Integer::operator-(const Integer& _right)
{
	Integer tmp(this->var - _right.var);
	return tmp;
}

Integer Integer::operator-=(const Integer& _right)
{
	this->var = this->var - _right.var;
	return this->var;
}

Integer Integer::operator*(const Integer& _right)
{
	Integer tmp(this->var * _right.var);
	return tmp;
}

Integer Integer::operator*=(const Integer& _right)
{
	this->var = this->var * _right.var;
	return this->var;
}

Integer Integer::operator/(const Integer& _right)
{
	Integer tmp(this->var / _right.var);
	return tmp;
}

Integer Integer::operator/=(const Integer& _right)
{
	this->var = this->var / _right.var;
	return this->var;

}

Integer Integer::operator%(const Integer& _right)
{
	Integer tmp(this->var % _right.var);
	return tmp;
}

Integer Integer::operator%=(const Integer& _right)
{
	this->var = this->var % _right.var;
	return this->var;
}

Integer Integer::operator<<(const Integer& _right)
{
	Integer tmp(this->var << _right.var);
	return tmp;

}

