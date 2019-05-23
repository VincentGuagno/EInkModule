#pragma once
#ifndef UUIDGENERATOR
#define UUIDGENERATOR
#include <string>

namespace MathUtils {
	static class UUIDGenerator
	{
	public :
		static std::string generateUUID();
	};
}
#endif // !UUIDGENERATOR