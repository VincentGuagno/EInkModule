#pragma once

#ifndef MAINAPPLI
#define MAINAPPLI
#include "UUIDGenerator.h"
#include <vector>
#include "Watcher.h"
#include "MainFrame.h"
#include "Notification.h"
#include "ClockFrame.h"
#include "PopUpFrame.h"

enum class EnumApplicationState
{
	Run,
	Pause,
	Stop
};

class MainApplication
{
private :
	EnumApplicationState _state;
	Watcher _watcher;
	MainFrame _mainFrame;
	PopUpFrame _popUpFrame;
	std::vector<Notification> _notifs;
public:
	MainApplication();
	~MainApplication();
	void Run();
	EnumApplicationState GetState();
	void AddNotification(Notification& notif);
	void RemoveNotification(Notification& notif);
	void ShowPopup(std::string message);
	void IncrementTime();
private:
	long _timer;
};


#endif
