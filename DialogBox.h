// Ahmed S. Tolba 2015-2018

#pragma once
#include "UIScreen.h"

class DialogBox : public UIScreen
{
public:
	// (Lower draw order corresponds with further back)
	DialogBox(class Game* game, const std::string& text,
		std::function<void()> onOK);
	~DialogBox();
};
