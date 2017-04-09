#ifndef MAKEPAIR_CPP
#define MAKEPAIR_CPP
#include <iostream>
#include "pairing.hpp"
#include "gengift.hpp"
#include "giftalloc.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

class makepair/*! \brief Class Makepair.
 *        
 *
 *  Class that has a method to allocate boys and girls to form couple as per the criteria
 */{
public:
	/*! boy array */
	boys guy[10000];
	/*! couple array */
	couple grp[10000];
	/*! girls array */
	girls gals[10000];
	/*! gift array */
	gifts gft[1000];
	/*! stores sum of prices and values and number of essential, luxury, utility individually*/
	int gifting[100][9];
	/*! number of boys, girls, gifts, couples*/
	int bb, gg, gn, cn;
	/*! creates couples and allocate gifts to couples*/
	void makingpair();
	/*! allocate gifts to couples*/
	void remaking();
};
#endif
