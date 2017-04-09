#ifndef GENGIFT_CPP
#define GENGIFT_CPP
#include <iostream>
#include "gifts.hpp"
#include "essentialgift.hpp"
#include "luxurygift.hpp"
#include "utilitygift.hpp"
using namespace std;

class gengift/*! \brief Class gengift.
 *        
 *
 *  Class that has a method to allocate gifts
 */{
public:
	/*! generate gifts and then returns number of gifts */
	int giftcreate (gifts gft[]);
};
#endif
