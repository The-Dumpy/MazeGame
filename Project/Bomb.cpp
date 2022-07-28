#include <iostream>
#include <windows.h>

#include "Bomb.h"

void Bomb::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "o";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}
