#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
private:

	T* _TempArray;
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

	void Resize(int NewSize)
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		};

		_TempArray = new T[NewSize];

		//limit the original size to the new size if it is less.
		if (NewSize < _Size)
			_Size = NewSize;

		//copy all data from original array until the size
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
};

