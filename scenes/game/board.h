#pragma once

#include "../../sdl-game-engine/ecs/component.h"
#include "../../sdl-game-engine/ecs/entity_manager.h"

#include "color_button.h"

#include <SDL.h>

class ColorButton;

class Board : public Component
{
public:
	Board(const int boxWidth, const int boxHeight, const int margin = 0);
	void start();
	void highlightColor(int color);
	void resetColors();

private:
	int boxWidth, boxHeight, margin;

	EntityManager* entityManager;

	Entity* green;
	Entity* red;
	Entity* blue;
	Entity* yellow;

	ColorButton* redButton;
	ColorButton* greenButton;
	ColorButton* blueButton;
	ColorButton* yellowButton;
};