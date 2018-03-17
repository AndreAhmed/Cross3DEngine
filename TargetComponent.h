// Ahmed S. Tolba 2015-2018

#pragma once
#include "Component.h"

class TargetComponent : public Component
{
public:
	TargetComponent(class Actor* owner);
	~TargetComponent();
};
