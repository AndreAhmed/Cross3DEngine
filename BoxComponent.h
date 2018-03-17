// Ahmed S. Tolba 2015-2018

#pragma once
#include "Component.h"
#include "Collision.h"

class BoxComponent : public Component
{
public:
	BoxComponent(class Actor* owner, int updateOrder = 100);
	~BoxComponent();

	void OnUpdateWorldTransform() override;

	void SetObjectBox(const AABB& model) { mObjectBox = model; }
	const AABB& GetWorldBox() const { return mWorldBox; }

	void SetShouldRotate(bool value) { mShouldRotate = value; }
private:
	AABB mObjectBox;
	AABB mWorldBox;
	bool mShouldRotate;
};
