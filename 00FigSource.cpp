#include"00FigHeader.h"
#include <string>
#include <iostream>

int Figuries::get_sides_count()
	{
		return sides_count;
	}

std::string Figuries::get_figura_name()
	{
		return Figure_Name;
	}

void Figuries::print_sides_dim()
	{
		std::cout << "no sides" << std::endl;
	}

void Figuries::print_engels_dim()
	{
		std::cout << "no engels" << std::endl;
	}

int Figuries::Engels_Summ()
	{
		return 0;
	}