#pragma once
#ifndef WATCHER
#define WATCHER
#include <iostream>
#include <chrono>
#include <thread>

enum class EnumApplicationState;
class MainApplication;
class Watcher
{
private :
	MainApplication* mainApplication;
	int interval;
public:
	Watcher();
	Watcher(MainApplication* main);
	~Watcher();
	void Play();
};

#endif // !WATCHER
