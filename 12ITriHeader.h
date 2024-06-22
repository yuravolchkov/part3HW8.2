#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"

class Isosceles_Triangele : public Triangele
{
protected:
	int aIT, cIT, AIT, CIT;
	std::string Figura_Name_IT = "�������������� �����������";
public:

	Isosceles_Triangele(int sides_count_IT, int InAIT, int InBIT, int InCIT, int InaIT, int IncIT) try : Triangele(sides_count_IT, InAIT, InBIT, InCIT), aIT(InaIT), cIT(IncIT), AIT(InAIT), CIT(InCIT)
	{
		if (aIT != cIT)
		{
			throw MyExcept("������ �������� ������. �������: ������� a � c �� �����");
		}

		if (AIT != CIT)
		{
			throw MyExcept("������ �������� ������. �������: ���� � � � �� �����");
		}

	}
	catch (const MyExcept& RetErr)
	{
	}

	std::string get_figura_name() override;
	
	void print_sides_dim() override;

	void print_engels_dim() override;

	~Isosceles_Triangele()
	{}

};