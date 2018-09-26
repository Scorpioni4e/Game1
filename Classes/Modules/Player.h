/****************************************************************************
Copyright (c) 2018 Team TNVU.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

/****************************************************************************
  ____  _                       
 |  _ \| | __ _ _   _  ___ _ __ 
 | |_) | |/ _` | | | |/ _ \ '__|
 |  __/| | (_| | |_| |  __/ |   
 |_|   |_|\__,_|\__, |\___|_|   
                |___/           

****************************************************************************/

#pragma once

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "cocos2d.h"

class Player
{
/****************************************************************************/
private:
	/////////////////////////////////////////////
	// Variables

	// Main entity
	static cocos2d::Sprite* playerSprite;

	// Player's state variables
	// Values: 0 - staying, 1 - moving++, -1 - moving--
	static int xMovement;
	static int yMovement;
	static int playerSpeed;

	/////////////////////////////////////////////
	// Methods

	// Move actions
	static void moveLeft();
	static void moveRight();
	static void moveUp();
	static void moveDown();

	// Real time frames update
	// Using for changing some data at real time (e.g. moving)
	static void scheduleUpdate();	

/****************************************************************************/
public:
	/////////////////////////////////////////////
	// Friends

	friend class Input;
	friend class Core;

	/////////////////////////////////////////////
	// Public methods

	// Create player sprite on some position
	static void spawnPlayer(cocos2d::Vec2 pos, cocos2d::Layer* layer);

	/////////////////////////////////////////////
	// Public get methods

	static cocos2d::Sprite* getSprite();
};

#endif // __PLAYER_H__ 
