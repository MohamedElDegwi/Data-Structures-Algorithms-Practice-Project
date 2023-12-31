#pragma once

#include <iostream>
#include <stack>

class clsMyString
{
private:

	std::string _Value;
	std::stack<std::string> _Undo;
	std::stack<std::string> _Redo;

public:

	void SetStrValue(std::string StrValue)
	{
		_Undo.push(_Value);
		_Value = StrValue;
	}

	std::string GetStrValue()
	{
		return _Value;
	}

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Redo.push(_Value);
			_Value = _Undo.top();
			_Undo.pop();
		}
	}

	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
	}
};

