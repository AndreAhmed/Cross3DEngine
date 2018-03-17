// Ahmed S. Tolba 2015-2018

#pragma once
#include "Math.h"

const size_t MAX_SKELETON_BONES = 96;

struct MatrixPalette
{
	Matrix4 mEntry[MAX_SKELETON_BONES];
};
