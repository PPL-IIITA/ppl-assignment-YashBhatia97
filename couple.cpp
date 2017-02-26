#include <iostream>
#include <stdlib.h>
#include "boys.hpp"
#include "couple.hpp"
using namespace std;
couple couple::calchap (couple c, int gifting[]){
	girls ggg;
	boys bbb;
	c.g1 = ggg.calgfhap (c.g1, gifting);
	c.b1 = bbb.calbfhap (c.b1, gifting, c.g1);
	c.happiness = c.g1.happiness + c.b1.happiness;
	return c;
}
couple couple::calcomp (couple c){
	int temp = c.b1.budget - c.g1.man_budget;
	temp += abs(c.b1.attractiveness - c.g1.attractiveness);
	temp += abs(c.b1.intelligence - c.g1.intelligence);
	c.compatibility = temp;
	return c;
}