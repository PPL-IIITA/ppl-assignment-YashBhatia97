#include "couple.hpp"
#include "makepair.hpp"
#include "findgf.hpp"
//#include "findgflinear.hpp"
//#include "findgfbs.hpp"
//#include "findgfhash.hpp"
#include "findgfsearch.hpp"
#include <iostream>
using namespace std;

int findgfsearch:: getchoice (boys b, couple grp[], int cn, int bb, boys guy[], int k){
	findgf *fg;
	int index;
	if (k == 0){
		findgflinear *fg1 = (findgflinear *) (fg);
		index = fg1->getindex(b, grp, cn, bb, guy);
	}
	else if (k == 1){
		findgfbs *fg2;
		fg2 = (findgfbs *) fg;
		index = fg2->getindex(b, grp, cn, bb, guy);
	}
	else if (k == 2){
		findgfhash *fg3;
		fg3 = (findgfhash *) fg;
		index = fg3->getindex(b, grp, cn, bb, guy);
	}
	return index;
}