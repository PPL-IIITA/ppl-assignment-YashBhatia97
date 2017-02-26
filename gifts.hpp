#ifndef GIFTS_HPP
#define GIFTS_HPP
#include <iostream>

class gifts/*! \brief Class gifts.
 *        
 *
 *  Class that has description of Gifts.
 */{
public:
	/*! name of the gift*/
	int name;
	/*! price of the gift*/
	int price;
	/*! value of the gift*/
	int value;
	/*! type of the gift: Essential Gift, Luxury Gift, Utility Gift*/
	int type;
	/*! Rating of the Luxury gift*/
	int luxrating;
	/*! Difficulity to obtain the Luxury Gift*/
	int luxdifficulty;
	/*! Value of the Utility Gift*/
	int utilityvalue;
	/*! Class of the Utility class*/
	int utilityclass;
};
#endif