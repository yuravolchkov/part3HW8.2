#include <iostream>
#include <string>
#include"11RTriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Right_Triangele::get_figura_name() 
	{
		return Figura_Name_RT;
	}

	void Right_Triangele::print_sides_dim()
	{
		std::cout << "стороны " << aT << ", " << bT << ", " << cT << ", ";
	}

	void Right_Triangele::print_engels_dim() 
	{
		std::cout << "углы " << AT << ", " << BT << ", " << CRT << ") создан " << std::endl;
	}