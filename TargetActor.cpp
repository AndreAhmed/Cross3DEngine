// Ahmed S. Tolba 2015-2018

#include "TargetActor.h"
#include "Game.h"
#include "Renderer.h"
#include "MeshComponent.h"
#include "BoxComponent.h"
#include "Mesh.h"
#include "TargetComponent.h"

TargetActor::TargetActor(Game* game)
	:Actor(game)
{
	//SetScale(10.0f);
	SetRotation(Quaternion(Vector3::UnitZ, Math::Pi));
	MeshComponent* mc = new MeshComponent(this);
	Mesh* mesh = GetGame()->GetRenderer()->GetMesh("Assets/Target.gpmesh");
	mc->SetMesh(mesh);
	// Add collision box
	BoxComponent* bc = new BoxComponent(this);
	bc->SetObjectBox(mesh->GetBox());
	new TargetComponent(this);

}
