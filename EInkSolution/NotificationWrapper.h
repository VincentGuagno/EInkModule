#pragma once
#ifndef NOTIFICATION_WRAPPER
#define NOTIFICATION_WRAPPER
using namespace std;
class Notification;
static class NotificationWrapper
{
public:
	NotificationWrapper(/*Main* _application*/);
	~NotificationWrapper();
	Notification WrapFrame(char* frame);
	//Main* Application;
};
#endif

