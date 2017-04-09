#ifndef MISERBOY_HPP
#define MISERBOY_HPP
#include "boys.hpp"
class miserboy:public boys/*! \brief Class miserboy.
 *        
 *
 *  Class that has description of miser boys.
 */{
public:
	/*! \brief Constructor of Class miser boy.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	miserboy (char name[], int attractiveness, int intelligence, int budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->budget = budget;
		this->criteria = criteria;
		this->type = 0;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
