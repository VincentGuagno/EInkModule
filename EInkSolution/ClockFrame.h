#pragma once
#include "IFrame.h"
class ClockFrame : public IFrame
{
public:
	ClockFrame();
	~ClockFrame();
	virtual void Paint(int frameId) override;
	virtual void Paint() override;
};

