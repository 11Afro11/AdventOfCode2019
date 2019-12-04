

#include "..\header\day01.h"
#include <iostream>


int Advent::calculateMass(std::string path)
{
	std::vector<int> input = readInput(path);

	int massSum = 0;
	int massFuel = 0;;
	for (auto item : input)
	{
		int fuel = (item / 3) - 2;
		massSum += fuel;
		massFuel += calculateFuelToFuel(fuel);
	}
	return massSum + massFuel;
}

int Advent::calculateFuelToFuel(int fuel)
{
	int mass;
	mass = (fuel / 3) - 2;
	if (mass <= 0) 
	{
		return 0;
	}
	else 
	{
		return mass + calculateFuelToFuel(mass);
	}
}

std::vector<int> Advent::readInput(std::string path)
{
	std::vector<int> input;
	std::ifstream infile(path);
	int value;
	if (!infile) {
		std::cout << "Unable to open file";
		exit(1);
	}

	while (infile >> value)
	{
		input.push_back(value);
	}
	infile.close();
	return input;
}
