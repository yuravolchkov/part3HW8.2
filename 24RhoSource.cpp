#include <iostream>
#include <string>
#include"24RhoHeader.h"
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Rhombus::get_figura_name() 
	{
		return Figura_Name_RS;
	}
	void Rhombus::print_sides_dim() 
	{
		std::cout << "стороны " << aRS << ", " << bRS << ", " << cRS << ", " << dRS << "; ";
	}

	void Rhombus::print_engels_dim()
	{
		std::cout << "углы " << ARS << ", " << BRS << ", " << CRS << ", " << DRS << ") создан " << std::endl;
	}