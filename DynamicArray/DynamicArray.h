#pragma once
#include <cstdint>

template <typename T>
class DynamicArray
{
private:
	int size;
	int capacity;
	float growthFactor;
	T* array;

public:
	DynamicArray() : size(0), capacity(10), growthFactor(2.0f), array(new T[capacity]) {}
	~DynamicArray()
	{

	}

	int getSize()			{ return size;		   }
	int getCapacity()		{ return capacity;	   }
	float getGrowthFactor() { return growthFactor; }

	void append(T data)
	{
		if (size >= capacity)
		{
			capacity = (int)(capacity * growthFactor);
			T* temp = new T[capacity];
			for (int i = 0; i < size; i++)
			{
				temp[i] = array[i];
			}
			delete[] array;
			array = temp;
		}
		size++;
		array[size - 1] = data;
	}

	T at(int index)
	{
		try
		{
			if (index < 0 || index >= size)
			{
				throw (index);
			}
			else
			{
				return array[index];
			}
		}
		catch (int index)
		{
			std::cout << "Wrong index: " << index << "!\nAllowed indexes: <0," << size - 1 << ">\n";
		}
	}



};

