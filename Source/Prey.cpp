#include "Prey.h"



Prey::Prey()
{
}

Prey::Prey(VECTOR2 pos)
{
	this->pos.x = pos.x;
	this->pos.y = pos.y;

	// player(‹SˆÈŠO)‚ÌÎß¼Þ¼®Ý‚Ì¾¯Ä
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
