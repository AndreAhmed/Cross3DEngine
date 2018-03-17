// Ahmed S. Tolba 2015-2018

#pragma once
#include "Actor.h"

class PlaneActor : public Actor
{
public:
	PlaneActor(class Game* game);
	~PlaneActor();
	class BoxComponent* GetBox() { return mBox; }
private:
	class BoxComponent* mBox;
};
