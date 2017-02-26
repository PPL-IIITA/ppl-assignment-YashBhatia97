#include <iostream>
#include <cstring>
#include "girls.hpp"
#include "boys.hpp"
using namespace std;
boys boys::calbfhap (boys bf, int gifting[], girls gf){
	if (bf.type == 0){
		int temp = bf.budget - (gifting[0] + gifting[3] + gifting[6]);
		bf.happiness = temp;
	}
	else if (bf.type == 1){
		bf.happiness = gf.happiness;
	}
	else {
		bf.happiness = gf.intelligence;
	}
	return bf;
}