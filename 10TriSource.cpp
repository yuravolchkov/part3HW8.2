#include <iostream>
#include <string>
#include"00FigHeader.h"
#include"00MyExcept.h"
#include"10TriHeader.h"

std::string Triangele::get_figura_name() 
	{
		return Figura_Name_T;
	}

	int Triangele::Engels_Summ()
	{
		return AT + BT + CT;
	}

	void Triangele::print_sides_dim() 
	{
		std::cout << "стороны " << aT << ", " << bT << ", " << cT << ", ";
	}

	void Triangele::print_engels_dim()
	{
		std::cout << "углы " << AT << ", " << BT << ", " << CT << ") создан " << std::endl;
	}
