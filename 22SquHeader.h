#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Square : public Quadrangle
{
protected:
	int aS, bS, cS, dS, AS, BS, CS, DS;
	std::string Figura_Name_S = "Квадрат";

public:
	Square(int sides_count_S, int InaS, int InbS, int IncS, int IndS, int InAS, int InBS, int InCS, int InDS) try : Quadrangle(sides_count_S, InaS, InbS, IncS, IndS, InAS, InBS, InCS, InDS), aS(InaS), bS(InbS), cS(IncS), dS(IndS), AS(InAS), BS(InBS), CS(InCS), DS(InDS)
	{
		if (AS != 90 && BS != 90 && CS != 90 && DS != 90)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: углы не равны 90 градусам");
		}
		if (cS != aS && aS != bS && bS != dS && dS != cS)
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

	~Square()
	{}
};