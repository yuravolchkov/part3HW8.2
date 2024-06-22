#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Rectangle : public Quadrangle
{
protected:
	int aR, bR, cR, dR, AR, BR, CR, DR;
	std::string Figura_Name_R = "Прямоугольник";

public:
	Rectangle(int sides_count_R, int InaR, int InbR, int IncR, int IndR, int InAR, int InBR, int InCR, int InDR) try : Quadrangle(sides_count_R, InaR, InbR, IncR, IndR, InAR, InBR, InCR, InDR), aR(InaR), bR(InbR), cR(IncR), dR(IndR), AR(InAR), BR(InBR), CR(InCR), DR(InDR)
	{
		if (AR != 90 && BR != 90 && CR != 90 && DR != 90)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: углы не равны 90 градусам");
		}

		if (cR != aR && bR != dR)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: Стороны попарно  не равны");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;
	void print_sides_dim() override;
	void print_engels_dim() override;
	~Rectangle()
	{}
};