#include "PopUpFrame.h"
#include "stdafx.h"



PopUpFrame::PopUpFrame()
{
	Id = POPUP_FRAME_ID;
	Width = 70;
	Height = 25;
	X = 70;
	Y = 20;
	ZIndex = 15;
}


PopUpFrame::~PopUpFrame()
{
}

void PopUpFrame::Paint(int frameId)
{
	if (frameId != Id) return;
}

void PopUpFrame::Paint()
{
	if (Visible)
	{
		//Print all elements
	}
}

