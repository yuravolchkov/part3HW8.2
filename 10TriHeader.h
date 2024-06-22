#pragma once
#include <iostream>
#include <string>
#include"00FigHeader.h"
#include"00MyExcept.h"


class Triangele : public Figuries
{
protected:
	int aT, bT, cT, AT, BT, CT;
	std::string Figura_Name_T = "Треугольник";
public:
	Triangele() : aT(3), bT(3), cT(3), AT(60), BT(60), CT(60) {};
	Triangele(int sides_count_T, int InAT, int InBT, int InCT) try : Figuries(sides_count_T, "Треугольник"), aT(3), bT(4), cT(5), AT(InAT), BT(InBT), CT(InCT)
	{
		if (get_sides_count() != 3)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: количество сторон не равно 3");
		}
		if (Engels_Summ() != 180)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: сумма углов не равна 180");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;
	int Engels_Summ() override;
	void print_sides_dim() override;
	void print_engels_dim() override;
	~Triangele()
	{}
};