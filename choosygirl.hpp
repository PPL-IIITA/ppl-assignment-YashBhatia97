#ifndef CHOOSYGIRL_HPP
#define CHOOSYGIRL_HPP
#include "girls.hpp"
class choosygirl:public girls/*! \brief Class Choosy girls.
 *        
 *
 *  Class that has description of Choosy girls.
 */{
public:
	/*! \brief Constructor of Class choosy girls.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	choosygirl (char name[], int attractiveness, int intelligence, int man_budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->man_budget = man_budget;
		this->criteria = criteria;
		this->type = 0;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
