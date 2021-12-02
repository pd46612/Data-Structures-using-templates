#include <cstdlib>
#include <iostream>
#include "DynamicArray/DynamicArray.h"


int main()
{
	DynamicArray<int> array;
	array.append(69);
	array.append(202);
	array.append(101);
	array.append(20.2);
	
	std::cout << array.at(1) << ", " << array.at(-1) << ", " << array.at(5);

	return EXIT_SUCCESS;
}