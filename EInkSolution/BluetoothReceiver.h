#pragma once

#define READ_FD     0
#define WRITE_FD    1

class BluetoothReceiver
{
public:
	BluetoothReceiver();
	~BluetoothReceiver();
	static char* Read();
	static void Write(char* stream);
};

