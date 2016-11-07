//#******************************************************************************
//#*
//#*      Copyright (C) 2015  Compro Computer Services
//#*      http://openig.compro.net
//#*
//#*      Source available at: https://github.com/CCSI-CSSI/MuseOpenIG
//#*
//#*      This software is released under the LGPL.
//#*
//#*   This software is free software; you can redistribute it and/or modify
//#*   it under the terms of the GNU Lesser General Public License as published
//#*   by the Free Software Foundation; either version 2.1 of the License, or
//#*   (at your option) any later version.
//#*
//#*   This software is distributed in the hope that it will be useful,
//#*   but WITHOUT ANY WARRANTY; without even the implied warranty of
//#*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
//#*   the GNU Lesser General Public License for more details.
//#*
//#*   You should have received a copy of the GNU Lesser General Public License
//#*   along with this library; if not, write to the Free Software
//#*   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//#*
//#*    Please direct any questions or comments to the OpenIG Forums
//#*    Email address: openig@compro.net
//#*
//#*
//#*****************************************************************************
#pragma once

#define EXTRA_LOGGING 0

#if EXTRA_LOGGING

#define EXTRA_LOGGING_STATIC_HANDLER 	static int frameNumber = 0; \
								static const int everyHowManyFrames = 50; \
								++frameNumber; \
								bool log = false; \
								if (frameNumber>everyHowManyFrames) \
								{ \
									frameNumber = 0; \
									log = true; \
								}

	class FrameLogger
	{
	public:
		FrameLogger(int _afterHowManyFrames):afterHowManyFrames(_afterHowManyFrames), currFrame(0){}
		bool tick(void)
		{
			++currFrame; 
			if (currFrame>afterHowManyFrames)
			{
				currFrame = 0;
				return true;
			}
			return false;
		}
	private:
		const int afterHowManyFrames;
		int currFrame;

	};

#else
#define EXTRA_LOGGING_STATIC_HANDLER 
#endif