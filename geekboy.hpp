#ifndef GEEKBOY_HPP
#define GEEKBOY_HPP
#include "boys.hpp"
class geekboy:public boys/*! \brief Class geekboy.
 *        
 *
 *  Class that has description of geeky boys.
 */{
public:
	/*! \brief Constructor of Class geeky boy.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	geekboy (char name[], int attractiveness, int intelligence, int budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->budget = budget;
		this->criteria = criteria;
		this->type = 2;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
