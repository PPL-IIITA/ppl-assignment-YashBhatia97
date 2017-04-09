#ifndef DESPERATEGIRL_HPP
#define DESPERATEGIRL_HPP
#include "girls.hpp"
class desperategirl: public girls/*! \brief Class Desperate girls.
 *        
 *
 *  Class that has description of Desperate girls.
 */{
public:
	/*! \brief Constructor of Class desperate girls.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	desperategirl (char name[], int attractiveness, int intelligence, int man_budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->man_budget = man_budget;
		this->criteria = criteria;
		this->type = 2;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
