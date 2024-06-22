#include <iostream>
#include <string>
#include <exception>
#include"00MyExcept.h"

std::string MyExcept::get_error()
 {
		return s_error;
}
