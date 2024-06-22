#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"


class Right_Triangele : public Triangele
{
protected:
	int CRT;
	std::string Figura_Name_RT = "Прямоугольный треугольник";
public:

	Right_Triangele(int sides_count_RT, int InART, int InBRT, int InCRT) try : Triangele(sides_count_RT, InART, InBRT, InCRT), CRT(InCRT)
	{
		if (CRT != 90)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: угл C не равн 90");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override; 
	void print_sides_dim() override;
	void print_engels_dim() override;

	~Right_Triangele()
	{}
};