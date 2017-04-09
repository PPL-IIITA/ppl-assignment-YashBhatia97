#include "pairing.hpp"
#include "gengift.hpp"
#include "giftalloc.hpp"
#include "makepair.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

void makepair::makingpair (){
	int  i, j;
	bb = 0, gg = 0;
	pairing p;
	p.allocarray (guy, gals, &bb, &gg);
	cn = p.creategrp (guy, gals, bb, gg, grp);
	gengift gengif;
	gn = gengif.giftcreate (gft);
	giftalloc gggg;
	gggg.allocating (gifting, grp, gft, cn, gn);
}

void makepair::remaking (){
	giftalloc gggg;
	gggg.allocating (gifting, grp, gft, cn, gn);
} 