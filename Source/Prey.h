#pragma once
#include "Obj.h"

class Prey :
	public Obj
{
public:
	Prey();
	Prey(VECTOR2 pos);
	~Prey();
	void Move(const Controller& controll, WeakList objlist);
	void Draw(void);

private:
	bool Init(void);
};

