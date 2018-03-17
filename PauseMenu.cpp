// Ahmed S. Tolba 2015-2018

#include "PauseMenu.h"
#include "Game.h"
#include "DialogBox.h"
#include <SDL/SDL.h>

PauseMenu::PauseMenu(Game* game)
	:UIScreen(game)
{
	mGame->SetState(Game::EPaused);
	SetRelativeMouseMode(false);
	SetTitle("PauseTitle");
	AddButton("ResumeButton", [this]() {
		Close();
	});
	AddButton("QuitButton", [this]() { 
		new DialogBox(mGame, "QuitText",
			[this]() {
				mGame->SetState(Game::EQuit);
		});
	});
}

PauseMenu::~PauseMenu()
{
	SetRelativeMouseMode(true);
	mGame->SetState(Game::EGameplay);
}

void PauseMenu::HandleKeyPress(int key)
{
	UIScreen::HandleKeyPress(key);
	
	if (key == SDLK_ESCAPE)
	{
		Close();
	}
}
