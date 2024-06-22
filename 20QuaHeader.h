#pragma once
#include <iostream>
#include <string>
#include"00FigHeader.h"
#include"00MyExcept.h"

class Quadrangle : public Figuries
{
protected:
	int aQ, bQ, cQ, dQ, AQ, BQ, CQ, DQ;
	std::string Figura_Name_Q = "Четырёхугольник";
public:
	Quadrangle() : aQ(0), bQ(0), cQ(0), dQ(0), AQ(0), BQ(0), CQ(0), DQ(0) {}; 

	Quadrangle(int sides_count_Q, int InaQ, int InbQ, int IncQ, int IndQ, int InAQ, int InBQ, int InCQ, int InDQ) try : Figuries(sides_count_Q, "Четырёхугольник"), aQ(InaQ), bQ(InbQ), cQ(IncQ), dQ(IndQ), AQ(InAQ), BQ(InBQ), CQ(InCQ), DQ(InDQ)
	{
		if (get_sides_count() != 4)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: количество сторон не равно 4");
		}

		if (Engels_Summ() != 360)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: сумма углов не равна 360");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;
	
	void print_sides_dim() override;
	
	void print_engels_dim() override;
	
	int Engels_Summ() override;
	
	~Quadrangle() {};
};