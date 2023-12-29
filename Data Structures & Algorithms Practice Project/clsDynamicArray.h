#pragma once

#include <iostream>

template <class T>
class clsDynamicArray
{
private:

	int _Size;

public:

	T* OriginalArray;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
		{
			Size = 0;
		}
		_Size = Size;

		OriginalArray = new T[Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || Index < 0)
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false); 
	}

	int Size()
	{
		return  _Size;
	}

	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}

		cout << "\n";
	}
};

