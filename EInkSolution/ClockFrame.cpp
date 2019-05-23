#include "ClockFrame.h"
#include "stdafx.h"



ClockFrame::ClockFrame()
{
	Id = CLOCK_FRAME_ID;
	Width = 100;
	Height = 50;
	X = 50;
	Y = 20;
	ZIndex = 15;
}


ClockFrame::~ClockFrame()
{
}

void ClockFrame::Paint(int frameId)
{
	if (frameId != Id) return;
}

void ClockFrame::Paint()
{
}
