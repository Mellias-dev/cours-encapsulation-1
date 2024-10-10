#include "Point.h"
#include <iostream>

std::string point::ToString(){

	return" x : " + std::to_string(x) + " y : " + std::to_string(y) + " z : " + std::to_string(z);
}