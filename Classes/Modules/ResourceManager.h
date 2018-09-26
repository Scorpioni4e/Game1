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
  ____                                      __  __                                   
 |  _ \ ___  ___  ___  _   _ _ __ ___ ___  |  \/  | __ _ _ __   __ _  __ _  ___ _ __ 
 | |_) / _ \/ __|/ _ \| | | | '__/ __/ _ \ | |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '__|
 |  _ <  __/\__ \ (_) | |_| | | | (_|  __/ | |  | | (_| | | | | (_| | (_| |  __/ |   
 |_| \_\___||___/\___/ \__,_|_|  \___\___| |_|  |_|\__,_|_| |_|\__,_|\__, |\___|_|   
                                                                     |___/           

****************************************************************************/

#pragma once

#ifndef __RESOURCEMANAGER_H__
#define __RESOURCEMANAGER_H__

#include "cocos2d.h"

class ResourceManager
{
public:

	// What sheet to get enumeration
	// Contains all type of situations
	// to resources sheet loading
	enum Sheet
	{
		Player,
		World
	};

	// Load to cache. This method
	// must be invoked from some layer
	static void loadSheetToFrameCache(Sheet type);
};

#endif // __RESOURCEMANAGER_H__
