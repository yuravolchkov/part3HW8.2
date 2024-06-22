#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Parallelogram : public Quadrangle
{
protected:
	int aP, bP, cP, dP, AP, BP, CP, DP;
	std::string Figura_Name_P = "Параллелограмм";

public:

	Parallelogram(int sides_count_P, int InaP, int InbP, int IncP, int IndP, int InAP, int InBP, int InCP, int InDP) try : Quadrangle(sides_count_P, InaP, InbP, IncP, IndP, InAP, InBP, InCP, InDP), aP(InaP), bP(InbP), AP(InAP), BP(InBP), cP(IncP), dP(IndP), CP(InCP), DP(InDP)
	{
		if (AP != CP && BP != DP)
		{
			throw MyExcept("Ошибка создания фигуры. Причина: углы не равны попарно");
		}
		if (cP != aP && bP != dP)
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

	~Parallelogram()
	{}
};