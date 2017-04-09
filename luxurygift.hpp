#ifndef LUXURYGIFT_HPP
#define LUXURYGIFT_HPP
#include <iostream>
#include "gifts.hpp"

class luxurygift: public gifts/*! \brief Class luxury gifts.
 *        
 *
 *  Class that has description of Gifts.
 */{
public:
	/*! luxury rating */
	int luxrating;
	/*! luxury difficulty */
	int luxdifficulty;
	
	/*! \brief Constructor of Class utility gifts.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	luxurygift (int name, int price, int value, int luxrating, int luxdifficulty){
		this->name = name;
		this->price = price;
		this->value = value;
		this->type = 1;
		this->luxrating = luxrating;
		this->luxdifficulty = luxdifficulty; 
	}
};
#endif
