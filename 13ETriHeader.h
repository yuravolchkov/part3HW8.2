#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Equilateral_Triangele : public Triangele
{
protected:
	int aET, bET, cET, AET, BET, CET;
	std::string Figura_Name_ET = "�������������� �����������";

public:

	Equilateral_Triangele(int sides_count_ET, int InAET, int InBET, int InCET, int InaET, int InbET, int IncET) try : Triangele(sides_count_ET, InAET, InBET, InCET), aET(InaET), AET(InAET), bET(InbET), BET(InBET), cET(IncET), CET(InCET)
	{
		if (aET != cET && cET != bET)
		{
			throw MyExcept("������ �������� ������. �������: ������� a b c �� �����");
		}

		if (AET != CET && CET != BET)
		{
			throw MyExcept("������ �������� ������. �������: ���� � B � �� �����");
		}
	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;

	void print_sides_dim() override;

	void print_engels_dim() override;

	~Equilateral_Triangele()
	{}
};