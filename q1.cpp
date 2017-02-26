#include <iostream>
#include "pairing.hpp"
using namespace std;

int main(){
	boys guy[10000];
	couple grp[10000];
	girls gals[10000];
	int bb, gg, i, j;
	bb = 0, gg = 0;
	pairing p;
	p.allocarray (guy, gals, &bb, &gg);
	p.creategrp (guy, gals, bb, gg, grp);
	return 0;
}