#include "Prey.h"



Prey::Prey()
{
}

Prey::Prey(VECTOR2 pos)
{
	this->pos.x = pos.x;
	this->pos.y = pos.y;

	// player(�S�ȊO)���߼޼�݂̾��
	SetPos(pos);
}


Prey::~Prey()
{
}

void Prey::Move(const Controller & controll, WeakList objlist)
{

}

void Prey::Draw(void)
{
	
}

bool Prey::Init(void)
{

	return true;
}
