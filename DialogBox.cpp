// Ahmed S. Tolba 2015-2018

#include "DialogBox.h"
#include "Game.h"
#include "Renderer.h"
#include <SDL/SDL.h>

DialogBox::DialogBox(Game* game, const std::string& text,
	std::function<void()> onOK)
	:UIScreen(game)
{
	// Adjust positions for dialog box
	mBGPos = Vector2(0.0f, 0.0f);
	mTitlePos = Vector2(0.0f, 100.0f);
	mNextButtonPos = Vector2(0.0f, 0.0f);

	mBackground = mGame->GetRenderer()->GetTexture("Assets/DialogBG.png");
	SetTitle(text, Vector3::Zero, 30);
	AddButton("OKButton", [onOK]() {
		onOK();
	});
	AddButton("CancelButton", [this]() { 
		Close();
	});
}

DialogBox::~DialogBox()
{
}
