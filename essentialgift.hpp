#ifndef ESSENTIALGIFT_HPP
#define ESSENTIALGIFT_HPP
#include <iostream>
#include "gifts.hpp"

class essentialgift: public gifts /*! \brief Class essential gifts.
 *        
 *
 *  Class that has description of Gifts.
 */{
public:
	/*! \brief Constructor of Class Essential gifts.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	essentialgift (int name, int price, int value){
		this->name = name;
		this->price = price;
		this->value = value;
		this->type = 0;
	}
};
#endif
