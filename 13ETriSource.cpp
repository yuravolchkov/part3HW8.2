#include <iostream>
#include <string>
#include"13ETriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Equilateral_Triangele::get_figura_name()
	{
		return Figura_Name_ET;
	}
	void Equilateral_Triangele::print_sides_dim()
	{
		std::cout << "стороны " << aET << ", " << bET << ", " << cET << "; ";
	}

	void Equilateral_Triangele::print_engels_dim()
	{
		std::cout << "углы " << AET << ", " << BET << ", " << CET << ") создан " << std::endl;
	}