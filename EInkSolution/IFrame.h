#pragma once
#include <string>
class IFrame
{
public:
	IFrame();
	~IFrame();
	int X = 0;
	int Y = 0;
	int Height = 0;
	int Width = 0;
	int ZIndex = 0;
	int Id = 0;
	virtual void Paint(int frameId) {};
	virtual void Paint() {};
};

