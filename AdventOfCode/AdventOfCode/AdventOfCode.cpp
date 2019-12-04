// AdventOfCode.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "header/day01.h"
#include "header/day02.h"

int main()
{
	int resultD1 = Advent::calculateMass("D:/Projects/AdventOfCode2019/AdventOfCode/AdventOfCode/inputs/day01.txt");
	int resultD2 = Advent::getFistPositionValue();
	int resultD2_2 = Advent::get2InitialDatas(19690720);


    std::cout << "DAY ONE SOLUTION IS: " << resultD1 << "\n";
	std::cout << "DAY TWO SOLUTION IS: " << resultD2 << "\n";
	std::cout << "DAY TWO PART TWO SOLUTION IS: " << resultD2_2 << "\n";

}

