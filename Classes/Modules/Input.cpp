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

#include "Input.h"

USING_NS_CC;

/****************************************************************************/
EventListenerKeyboard* Input::keyboardListener()
{
	// Create keyboard listener
	auto listener = EventListenerKeyboard::create();
	Director::getInstance()->getOpenGLView()->setIMEKeyboardState(true);

	/////////////////////////////////////////////
	// All keyboard PRESS events
	//
	listener->onKeyPressed = [](EventKeyboard::KeyCode keyCode, Event* event)
	{
		switch (keyCode)
		{
			// Player movement
			// Increment or decrement player movement state

		case EventKeyboard::KeyCode::KEY_A:
			Player::moveLeft();
			break;
		case EventKeyboard::KeyCode::KEY_D:
			Player::moveRight();
			break;
		case EventKeyboard::KeyCode::KEY_W:
			Player::moveUp();
			break;
		case EventKeyboard::KeyCode::KEY_S:
			Player::moveDown();
			break;
		}
	};

	/////////////////////////////////////////////
	// All keyboard RELEASE events
	//
	listener->onKeyReleased = [](EventKeyboard::KeyCode keyCode, Event* event)
	{
		switch (keyCode)
		{
			// Player movement
			// Incrementation/decrementation should be the opposite from the key pressed event.

		case EventKeyboard::KeyCode::KEY_A:
			Player::moveRight();
			break;
		case EventKeyboard::KeyCode::KEY_D:
			Player::moveLeft();
			break;
		case EventKeyboard::KeyCode::KEY_W:
			Player::moveDown();
			break;
		case EventKeyboard::KeyCode::KEY_S:
			Player::moveUp();
			break;
		}
	};

	return listener;
}

