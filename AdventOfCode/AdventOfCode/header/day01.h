#pragma once
#ifndef DAYONE
#define DAYONE



#include <string>
#include <vector>
#include <fstream>

namespace DayOne 
{
	int calculateMass(std::string path);

	int calculateFuelToFuel(int fuel);

	std::vector<int> readInput(std::string path);
}

#endif // !1