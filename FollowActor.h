// Ahmed S. Tolba 2015-2018

#pragma once
#include "Actor.h"

class FollowActor : public Actor
{
public:
	FollowActor(class Game* game);

	void ActorInput(const uint8_t* keys) override;

	void SetVisible(bool visible);
private:
	class MoveComponent* mMoveComp;
	class FollowCamera* mCameraComp;
	class SkeletalMeshComponent* mMeshComp;
	bool mMoving;
};
