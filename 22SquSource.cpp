#include <iostream>
#include <string>
#include"22SquHeader.h"
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Square::get_figura_name()
	{
		return Figura_Name_S;
	}
	void Square::print_sides_dim()
	{
		std::cout << "������� " << aS << ", " << bS << ", " << cS << ", " << dS << "; ";
	}
	void Square::print_engels_dim()
	{
		std::cout << "���� " << AS << ", " << BS << ", " << CS << ", " << DS << ") ������ " << std::endl;
	}
