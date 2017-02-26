#ifndef GIFTALLOC_HPP
#define GIFTALLOC_HPP
#include "gifts.hpp"
#include "couple.hpp"
using namespace std;

class giftalloc/*! \brief Class giftalloc.
 *        
 *
 *  Class that has a method to allocate gifts to the couple.
 */{
public:
	/*! Function used to allocate gifts to the couple */
	 int allocating (int gifting[][9],couple coup[], gifts gft[]);
};
#endif