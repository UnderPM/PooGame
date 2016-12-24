#pragma once
#include "Graphics.h"
class Player {
public:
	int x = ((Graphics::ScreenWidth - 1) / 2) - (Player::width / 2);
	int y = ((Graphics::ScreenHeight - 1) / 2) - (Player::height / 2);
	static constexpr int width = 20;
	static constexpr int height = 20;
	void ClampToScreen();
};