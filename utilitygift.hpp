
#ifndef UTILITYGIFT_HPP
#define UTILITYGIFT_HPP
#include <iostream>
#include "gifts.hpp"

class utilitygift: public gifts/*! \brief Class utility gifts.
 *        
 *
 *  Class that has description of Gifts.
 */{
public:
	/*! utility value */
	int utilityvalue;
	/*! utility class */
	int utilityclass;
	
	/*! \brief Constructor of Class utility gifts.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	utilitygift (int name, int price, int value, int utilityvalue, int utilityclass){
		this->name = name;
		this->price = price;
		this->value = value;
		this->type = 2;
		this->utilityvalue = utilityvalue;
		this->utilityclass = utilityclass; 
	}
};
#endif
