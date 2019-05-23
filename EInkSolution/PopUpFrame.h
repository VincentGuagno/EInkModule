#pragma once
#include "IFrame.h"
class PopUpFrame :
	public IFrame
{
private:
public:
	PopUpFrame();
	~PopUpFrame();
	virtual void Paint(int frameId) override;
	virtual void Paint() override;
	std::string Text;
	long LastTimer = 0;
	long Duration = 100;
	bool Visible = false;
};

