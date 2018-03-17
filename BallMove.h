// Ahmed S. Tolba 2015-2018
-----------------------------------------------------------

#pragma once
#include "MoveComponent.h"

class BallMove : public MoveComponent
{
public:
	BallMove(class Actor* owner);

	void SetPlayer(Actor* player) { mPlayer = player; }
	void Update(float deltaTime) override;
protected:
	class Actor* mPlayer;
};