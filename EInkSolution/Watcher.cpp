#include "Watcher.h"
#include "MainApplication.h"

using namespace std;

Watcher::Watcher()
{
}

Watcher::Watcher(MainApplication *main)
{
	interval = 100;
	mainApplication = main;
}


Watcher::~Watcher()
{
}

void Watcher::Play()
{
	while (mainApplication->GetState() == EnumApplicationState::Run)
	{
		this_thread::sleep_for(std::chrono::milliseconds(interval));
		mainApplication->IncrementTime();
		cout << "Boucle" << endl;
	}
}
