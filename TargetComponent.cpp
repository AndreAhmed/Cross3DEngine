// Ahmed S. Tolba 2015-2018
 
#include "BoxComponent.h"
#include "Actor.h"
#include "Game.h"
#include "PhysWorld.h"
#include "TargetComponent.h"
#include "Math.h"
#include "Game.h"
#include "HUD.h"

TargetComponent::TargetComponent(Actor * owner)
	:Component(owner)
{
	mOwner->GetGame()->GetHUD()->AddTargetComponent(this);
}

TargetComponent::~TargetComponent()
{
	mOwner->GetGame()->GetHUD()->RemoveTargetComponent(this);
}
