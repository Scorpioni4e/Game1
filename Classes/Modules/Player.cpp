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

#include "Player.h"

USING_NS_CC;

//////////////////////////////
// Init members first

// Entity
Sprite* Player::playerSprite = nullptr;

// Movement
int Player::xMovement = 0;
int Player::yMovement = 0;
int Player::playerSpeed = 5;

/****************************************************************************/
// Initialize

void Player::spawnPlayer(cocos2d::Vec2 pos, cocos2d::Layer* layer)
{
	// Create player sprite and load image from sprite cache.
	// After, add sprite to pointed layer
	playerSprite = Sprite::createWithSpriteFrameName("player.png");

	if(playerSprite == nullptr)
		throw new std::exception("Sprite load error");

	playerSprite->setPosition(pos.x, pos.y);
	layer->addChild(playerSprite, 0);
}

/****************************************************************************/
// Moving

void Player::moveLeft()
{
	xMovement--;
}

void Player::moveRight()
{
	xMovement++;
}

void Player::moveUp()
{
	yMovement++;
}

void Player::moveDown()
{
	yMovement--;
}

/****************************************************************************/
// Real time update

void Player::scheduleUpdate()
{
	// Update position if player moving (movement value != 0)
	playerSprite->setPosition
	(
		playerSprite->getPositionX() + xMovement * playerSpeed, // x
		playerSprite->getPositionY() + yMovement * playerSpeed // y
	);

	// Variables protection
	// Movement property can only be 0, 1 and -1
	// x
	if (xMovement > 1) xMovement = 1;
	else if (xMovement < -1) xMovement = -1;
	// y
	if (yMovement > 1) yMovement = 1;
	else if (yMovement < -1) yMovement = -1;

	// ...
}

/****************************************************************************/
// Get methods

Sprite* Player::getSprite()
{
	return playerSprite;
}