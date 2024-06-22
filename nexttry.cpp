#include <iostream>
#include <string>
#include <exception>
#include"24RhoHeader.h"
#include"23ParHeader.h"
#include"22SquHeader.h"
#include"21RecHeader.h"
#include"20QuaHeader.h"
#include"13ETriHeader.h"
#include"12ITriHeader.h"
#include"11RTriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00MyExcept.h"
#include"00PrintInfo.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран
/*
Треугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_T_Main = 3, In_Main_AT = 60, In_Main_BT = 60, In_Main_CT = 60;
	try {
		Figuries* Fig1;
		Fig1 = new Triangele{ sides_count_T_Main,In_Main_AT,In_Main_BT,In_Main_CT };
		print_info(Fig1);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
		//std::cerr << RetErr.get_error() << std::endl;
	}
	
/*
Прямоугольный треугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_RT_Main = 3, In_Main_ART = 60, In_Main_BRT = 30, In_Main_CRT = 90;
	try {
		Figuries* Fig2;
		Fig2 = new Right_Triangele{ sides_count_RT_Main,In_Main_ART,In_Main_BRT,In_Main_CRT };
		print_info(Fig2);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr  << RetErr.what() << std::endl;
	}
/*
Равнобедренный треугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_IT_Main = 3, In_Main_AIT = 75, In_Main_BIT = 30, In_Main_CIT = 75, In_Main_aIT = 3 , In_Main_cIT = 3;
	try {
		Figuries* Fig3;
		Fig3 = new Isosceles_Triangele{ sides_count_IT_Main , In_Main_AIT , In_Main_BIT , In_Main_CIT , In_Main_aIT , In_Main_cIT };
		print_info(Fig3);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Равносторонний треугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_ET_Main = 3, In_Main_AET = 60, In_Main_BET = 60, In_Main_CET = 60, In_Main_aET = 3, In_Main_bET = 3, In_Main_cET = 3;
	try {
		Figuries* Fig4;
		Fig4 = new Equilateral_Triangele{ sides_count_ET_Main, In_Main_AET , In_Main_BET , In_Main_CET , In_Main_aET , In_Main_bET , In_Main_cET };
		print_info(Fig4);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Четырёхугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_Q_Main = 4 , In_Main_aQ = 3, In_Main_bQ = 4, In_Main_cQ =5, In_Main_dQ=6, In_Main_AQ=40, In_Main_BQ=140, In_Main_CQ=130, In_Main_DQ=50;
	try {
		Figuries* Fig5;
		Fig5 = new Quadrangle{ sides_count_Q_Main , In_Main_aQ , In_Main_bQ , In_Main_cQ , In_Main_dQ , In_Main_AQ , In_Main_BQ , In_Main_CQ , In_Main_DQ };
		print_info(Fig5);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Прямоугольник
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_R_Main = 4, In_Main_aR = 3, In_Main_bR = 4, In_Main_cR = 3, In_Main_dR = 4, In_Main_AR = 90, In_Main_BR = 90, In_Main_CR = 90, In_Main_DR = 90;
	try {
		Figuries* Fig6;
		Fig6 = new Rectangle{ sides_count_R_Main , In_Main_aR , In_Main_bR , In_Main_cR , In_Main_dR , In_Main_AR , In_Main_BR , In_Main_CR , In_Main_DR };
		print_info(Fig6);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Квадрат
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_S_Main = 4, In_Main_aS = 3, In_Main_bS = 4, In_Main_cS = 3, In_Main_dS = 4, In_Main_AS = 90, In_Main_BS = 90, In_Main_CS = 90, In_Main_DS = 90;
	try {
		Figuries* Fig7;
		Fig7 = new Square{ sides_count_S_Main , In_Main_aS , In_Main_bS , In_Main_cS , In_Main_dS , In_Main_AS , In_Main_BS , In_Main_CS , In_Main_DS };
		print_info(Fig7);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Параллелограмм
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_P_Main = 4, In_Main_aP = 3, In_Main_bP = 4, In_Main_cP = 3, In_Main_dP = 4, In_Main_AP = 30, In_Main_BP = 150, In_Main_CP = 30, In_Main_DP = 150;
	try {
		Figuries* Fig8;
		Fig8 = new Parallelogram{ sides_count_P_Main , In_Main_aP , In_Main_bP , In_Main_cP , In_Main_dP , In_Main_AP , In_Main_BP , In_Main_CP , In_Main_DP };
		print_info(Fig8);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}
/*
Ромб
Количество сторон: sides_count_*_Main
Стороны: In_Main_a*
Уголы C: In_Main_C*
*/
	int sides_count_Rh_Main = 4, In_Main_aRh = 3, In_Main_bRh = 4, In_Main_cRh = 3, In_Main_dRh = 4, In_Main_ARh = 30, In_Main_BRh = 150, In_Main_CRh = 30, In_Main_DRh = 150;
	try {
		Figuries* Fig9;
		Fig9 = new Rhombus{ sides_count_Rh_Main , In_Main_aRh , In_Main_bRh , In_Main_cRh , In_Main_dRh , In_Main_ARh , In_Main_BRh , In_Main_CRh , In_Main_DRh };
		print_info(Fig9);
	}
	catch (const MyExcept& RetErr)
	{
		std::cerr << RetErr.what() << std::endl;
	}

	return 82;
}