#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <math.h>
#include "girls.hpp"
using namespace std;
girls girls::calgfhap(girls gf,int gifting[]){
	if (gf.type == 0){
		double temp =  log(gifting[0] + gifting[2] + gifting[3] + 2*gifting[5] + gifting[6] + gifting[8]-gf.man_budget);
		gf.happiness = temp;
	}
	else if (gf.type == 1){
		gf.happiness = gifting[0] + gifting[2] + gifting[3] + gifting[5] + gifting[6] + gifting[8];
	}
	else {
		double temp = exp ((gifting[0] + gifting[3] + gifting[6])%20);
		gf.happiness = temp;
	}
	return gf;
}