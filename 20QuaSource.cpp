#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00MyExcept.h"

	std::string Quadrangle:: get_figura_name() 
	{
		return Figura_Name_Q;
	}
	void Quadrangle::print_sides_dim() 
	{
		std::cout << "������� " << aQ << ", " << bQ << ", " << cQ << ", " << dQ << "; ";
	}

	void Quadrangle::print_engels_dim()
	{
		std::cout << "���� " << AQ << ", " << BQ << ", " << CQ << ", " << DQ << ") ������ " << std::endl;
	}

	int Quadrangle::Engels_Summ() 
	{
		return AQ + BQ + CQ + DQ;
	}
