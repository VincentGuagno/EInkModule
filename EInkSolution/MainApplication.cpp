#include "MainApplication.h"
#include "stdafx.h"

MainApplication::MainApplication()
{
	_watcher = Watcher(this);
	_mainFrame = MainFrame(this);

	ClockFrame clock = ClockFrame();
	_popUpFrame = PopUpFrame();

	_mainFrame.AddFrame(clock);

	std::string id = MathUtils::UUIDGenerator::generateUUID();
}


MainApplication::~MainApplication()
{
}

void MainApplication::Run()
{
	_state = EnumApplicationState::Run;
	_watcher.Play();
}

EnumApplicationState MainApplication::GetState()
{
	return _state;
}

void MainApplication::AddNotification(Notification& notif)
{
	_notifs.push_back(notif);
	_mainFrame.Refresh();
}

void MainApplication::RemoveNotification(Notification & notif)
{
	_mainFrame.Refresh();
}

void MainApplication::ShowPopup(std::string message)
{
	_popUpFrame.Text = message;
	_popUpFrame.LastTimer = _timer;
	_popUpFrame.Paint(POPUP_FRAME_ID);
}

void MainApplication::IncrementTime()
{
	_timer++;
	if (_popUpFrame.Visible)
	{
		if (_popUpFrame.LastTimer + _popUpFrame.Duration < _timer)
		{
			_popUpFrame.Visible = false;
			_mainFrame.Paint();
		}
	}
}
