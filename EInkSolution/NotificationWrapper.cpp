#include "NotificationWrapper.h"
#include "Notification.h"

NotificationWrapper::NotificationWrapper(/*Main * _application*/)
{
	//Application = _application;
}

NotificationWrapper::~NotificationWrapper()
{
}

Notification NotificationWrapper::WrapFrame(char * frame)
{
	return Notification();
}
