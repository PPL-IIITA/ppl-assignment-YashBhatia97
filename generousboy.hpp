#ifndef GENEROUSBOY_HPP
#define GENEROUSBOY_HPP
#include "boys.hpp"
class generousboy:public boys/*! \brief Class generousboy.
 *        
 *
 *  Class that has description of generous boys.
 */{
public:
	/*! \brief Constructor of Class generous boy.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	generousboy (char name[], int attractiveness, int intelligence, int budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->budget = budget;
		this->criteria = criteria;
		this->type = 1;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
