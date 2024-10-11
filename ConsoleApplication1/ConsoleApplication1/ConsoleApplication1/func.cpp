#include <string>
#include <sstream>
#include "Point.h"
#include "Vector2.h"
#include <iostream>
#include "Entity.h"
#include "AMovable.h"
#include "Alive.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"

std::string Point::ToString()
{
	std::string str = "Point: x:" + std::to_string(x) + "," + "y:" + std::to_string(y) + ";" + std::to_string(z);
	return str;
}

Vector2::Vector2() : x(0.f) , y(0.f) {

}


Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}


float Vector2::GetVector2X()
{
	return x;
}

float Vector2::GetVector2Y()
{
	return y;
}

void Vector2::SetPosition(float _x, float _y)
{
	x = _x;
	y = _y;

}

void Vector2::SetPosition(std::string _xStr, std::string _yStr) {

}

Vector2 Vector2::operator+(const Vector2& _right)
{
	Vector2 _v;
	_v.x = this->x + _right.x;
	_v.y = this->y + _right.y;
	return _v;
}

Entity::Entity() : Position(0.f, 0.f) {

}

float Entity::GetEntityX() {

	return Position.GetVector2X();
}

float Entity::GetEntityY() {
	return Position.GetVector2Y();
}

void Entity::SetPosition(float _x, float _y) {
	Position.SetPosition(_x, _y);
}


AMovable::AMovable() : Direction(0.f, 0.f), speed(0.f) {

}

AMovable::AMovable(Vector2 _Direction, float _speed) : Direction(0.f, 0.f), speed(_speed) {

};

void AMovable::SetDirection(float _x, float _y) {
	Direction.SetPosition(_x, _y);
};

void AMovable::SetSpeed(float _speed) {
	speed = _speed;
};


void AMovable::Move() {

};


Alive::Alive() : Life(0.f), MaxLife(0.f) {

}

Alive::Alive(float _Life, float _MaxLife) : Life(_Life), MaxLife(_MaxLife) {

};

void Alive::SetLife(int _Life) {
	Life = _Life;
}

void Alive::SetMaxLife(int _MaxLife) {
	MaxLife = _MaxLife;
}

int Alive::GetLife() {
	return Life;
}

int Alive::GetMaxLife() {
	return MaxLife;
}


void Alive::TakeDamage(int _Damage) {
	Life -= _Damage;
}


void IAttacker::Attack() {

}


StaticObject::StaticObject(float _x, float _y) {
	SetPosition(_x, _y);
	std::stringstream stream;
	stream << "StaticObject just created at x = " << GetEntityX() << " and y = " << GetEntityY();
	std::cout << stream.str() << std::endl;

};


BreakableObject::BreakableObject(float _x, float _y, float _MaxLife, float _Life) {
	Position.SetPosition(_x, _y);
	SetLife(_Life);
	SetMaxLife(_MaxLife);
	std::stringstream stream;
	stream << "BreakableObject just created at x = " << GetEntityX() << " and y = " << GetEntityY() << " with " << GetMaxLife() << " Life";
	std::cout << stream.str() << std::endl;

};

void BreakableObject::TakeDamage(int _Damage) {
	Life -= _Damage;
	if (this->GetLife() == 0) {
		std::cout << "Breakable Object was broke" << std::endl;
	}
		
}

Mob::Mob(float _x, float _y, float _MaxLife, float _Life, float _VectorDirectionX, float _VectorDirectionY) {
	SetPosition(_x, _y);
	SetLife(_Life);
	SetMaxLife(_MaxLife);
	SetDirection(_VectorDirectionX, _VectorDirectionY);
}




int main(int argc, const char* argv[]) {

	

	




}