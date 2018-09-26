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
  ___                   _   
 |_ _|_ __  _ __  _   _| |_ 
  | || '_ \| '_ \| | | | __|
  | || | | | |_) | |_| | |_ 
 |___|_| |_| .__/ \__,_|\__|
           |_|              

****************************************************************************/

#pragma once

#ifndef __INPUT_H__
#define __INPUT_H__

#include "cocos2d.h"
#include "Player.h"

class Input
{
public:
	// This function contains definition
	// for input handle.
	//
	// Returns keyboard listener, which
	// can was added to your scene.
	//
	static cocos2d::EventListenerKeyboard* keyboardListener();
};

#endif // __INPUT_H__