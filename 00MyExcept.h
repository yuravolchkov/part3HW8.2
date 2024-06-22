#pragma once
#include <iostream>
#include <string>
#include <exception>

class MyExcept : public std::exception
{
protected:
	std::string s_error;
public:
	MyExcept(std::string s) : s_error(s) {}
	virtual std::string get_error();
};