#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Rhombus : public Quadrangle
{
protected:
	int aRS, bRS, cRS, dRS, ARS, BRS, CRS, DRS;
	std::string Figura_Name_RS = "Ромб";

public:

	Rhombus(int sides_count_RS, int InaRS, int InbRS, int IncRS, int IndRS, int InARS, int InBRS, int InCRS, int InDRS) try : Quadrangle(sides_count_RS, InaRS, InbRS, IncRS, IndRS, InARS, InBRS, InCRS, InDRS), aRS(InaRS), bRS(InbRS), cRS(IncRS), dRS(IndRS), ARS(InARS), BRS(InBRS), CRS(InCRS), DRS(InDRS)
	{
		if (ARS != CRS && DRS != DRS)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: углы не равны попарно");
		}

		if (cRS != aRS && bRS != dRS && bRS != cRS && aRS != dRS)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: Стороны не равны");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;
	void print_sides_dim() override;
	void print_engels_dim() override;
	~Rhombus()
	{}
};