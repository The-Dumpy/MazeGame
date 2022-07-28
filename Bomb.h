#pragma once
#include "PlacableActor.h"
class Bomb : public PlacableActor
{
public:
	Bomb(int x, int y, ActorColor color)
		: PlacableActor(x, y, color)
	{

	}

	virtual ActorType GetType() override { return ActorType::Bomb; }
	virtual void Draw() override;
};

