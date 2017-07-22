/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Miner.h"
#include "Block.h"
#include "Global.h"
#include "Ore.h"
#include <random>

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawGameOver(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	std::uniform_int_distribution<int> Move_Dist;
	static constexpr int nMiners = 10;
	static constexpr int nBlocks = 20;
	Miner miner[nMiners];
	Ore ore0;
	Block block[nBlocks];
	int x_Start;
	int y_Start;
	int x_Finish;
	int y_Finish;
	
	int x = 20;
	int Dead_x;
	int y = 500;
	int w = 1;
	int e = 1;
	int x_G = 400;
	int y_G = 550;
	bool Jump = false;
	bool JumpReset = false;

	bool Dead_Miner_Check = false;
	int New_Miner = 0;
	int Dead_Miner = -1;
	bool Game_Over = false;
	int Lives = nMiners;

	bool Hit = false;

	bool Pick_Up = false;
	bool Drop = false;

	bool Shift_Switch0 = false;
	bool Shift_Switch1 = false;

	int JumpSpeed = 0;
	float v = 0;
	/********************************/
};