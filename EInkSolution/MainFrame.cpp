#include "MainFrame.h"
#include "MainApplication.h"
#include "IFrame.h"
#include "stdafx.h"

MainFrame::MainFrame()
{
}

MainFrame::MainFrame(MainApplication * application)
{
	_application = application;
	_lFrame = std::vector<IFrame>();

}

void MainFrame::Refresh()
{
}

void MainFrame::AddFrame(IFrame &frame)
{
	_lFrame.push_back(frame);
}

void MainFrame::Paint()
{
	for each (IFrame frame in _lFrame)
	{
		frame.Paint();
	}
}
void MainFrame::Paint(int id)
{
	for each (IFrame frame in _lFrame)
	{
		frame.Paint(id);
	}
}

MainFrame::~MainFrame()
{
}
