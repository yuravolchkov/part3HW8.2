#include <iostream>
#include <string>
#include"21RecHeader.h"
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Rectangle::get_figura_name() 
	{
		return Figura_Name_R;
	}
	void Rectangle::print_sides_dim() 
	{
		std::cout << "������� " << aR << ", " << bR << ", " << cR << ", " << dR << "; ";
	}
	void Rectangle::print_engels_dim() 
	{
		std::cout << "���� " << AR << ", " << BR << ", " << CR << ", " << DR << ") ������ " << std::endl;
	}