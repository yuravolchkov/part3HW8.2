#include <iostream>
#include <string>
#include"12ITriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

std::string Isosceles_Triangele::get_figura_name()
{
	return Figura_Name_IT;
}

	void Isosceles_Triangele::print_sides_dim() 
	{
		std::cout << "стороны " << aIT << ", " << bT << ", " << cIT << "; ";
	}

	void Isosceles_Triangele::print_engels_dim() 
	{
		std::cout << "углы " << AIT << ", " << BT << ", " << CIT << ") создан " << std::endl;
	}
