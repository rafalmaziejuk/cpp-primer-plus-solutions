#include <iostream>
#include "Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

Move::~Move(void)
{

}

void Move::showmove() const
{
	std::cout << '(' << x << ", " << y << ')';
}

Move Move::add(const Move &m) const
{
	return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}