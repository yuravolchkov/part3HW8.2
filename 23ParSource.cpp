#include <iostream>
#include <string>
#include"23ParHeader.h"
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

	std::string Parallelogram::get_figura_name()
	{
		return Figura_Name_Q;
	}
	void Parallelogram::print_sides_dim()
	{
		std::cout << "������� " << aP << ", " << bP << ", " << cP << ", " << dP << "; ";
	}
	void Parallelogram::print_engels_dim()
	{
		std::cout << "���� " << AP << ", " << BP << ", " << CP << ", " << DP << ") ������ " << std::endl;
	}
