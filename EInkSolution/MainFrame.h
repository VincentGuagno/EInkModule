

#ifndef MAINFRAME
#define MAINFRAME
#include <vector>
class MainApplication;
class IFrame;
enum class EnumApplicationState;

class MainFrame
{
public:
	MainFrame();
	MainFrame(MainApplication* application);
	void Refresh();
	void AddFrame(IFrame &frame);
	void Paint();
	void Paint(int id);
	~MainFrame();
private:
	MainApplication* _application;
	std::vector<IFrame> _lFrame;
};

#endif

