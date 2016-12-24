#pragma once
class Poo {
public:
	static constexpr int width = 24;
	static constexpr int height = 24;
	int x;
	int y;
	bool isEaten = false;
	void EatPoo(int x0, int y0, int width0, int height0);
};