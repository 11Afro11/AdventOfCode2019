

#include "..\header\day02.h"

std::vector<int> inputData{ 1, 12, 2, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 1, 9, 19, 1, 5, 19, 23, 1, 6, 23, 27, 1, 27, 10, 31, 1, 31, 5, 35, 2, 10, 35, 39, 1, 9, 39, 43, 1, 43, 5, 47, 1, 47, 6, 51, 2, 51, 6, 55, 1, 13, 55, 59, 2, 6, 59, 63, 1, 63, 5, 67, 2, 10, 67, 71, 1, 9, 71, 75, 1, 75, 13, 79, 1, 10, 79, 83, 2, 83, 13, 87, 1, 87, 6, 91, 1, 5, 91, 95, 2, 95, 9, 99, 1, 5, 99, 103, 1, 103, 6, 107, 2, 107, 13, 111, 1, 111, 10, 115, 2, 10, 115, 119, 1, 9, 119, 123, 1, 123, 9, 127, 1, 13, 127, 131, 2, 10, 131, 135, 1, 135, 5, 139, 1, 2, 139, 143, 1, 143, 5, 0, 99, 2, 0, 14, 0 };
//std::vector<int> inputData{ 1,1,1,4,99,5,6,0,99 };

int Advent::getFistPositionValue()
{
	int firstPosition;
	int secondPosition;
	int storePosition;
	unsigned __int64 i = 0;
	while (inputData[i] != 99)
	{
		firstPosition = inputData[i+1];
		secondPosition = inputData[i+2];
		storePosition = inputData[i+3];
		if (inputData[i] == 1)
		{
			inputData[storePosition] = inputData[firstPosition] + inputData[secondPosition];
		}
		if (inputData[i] == 2)
		{
			inputData[storePosition] = inputData[firstPosition] * inputData[secondPosition];
		}
		i += 4;
	}
	return inputData[0];
}

int Advent::get2InitialDatas(int final)
{
	for (int noun = 0; noun < 99; noun++)
	{
		for (int verb = 0; verb < 99; verb++)
		{
			inputData[1] = noun;
			inputData[2] = verb;
			int pos = getFistPositionValue();
			if (pos == final)
			{
				return 100 * noun + verb;
			}
		}
	}
	return -1;
}
