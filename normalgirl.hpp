#ifndef NORMALGIRL_HPP
#define NORMALGIRL_HPP
#include "girls.hpp"
class normalgirl:public girls/*! \brief Class Normal girls.
 *        
 *
 *  Class that has description of Normal girls.
 */{
public:
	/*! \brief Constructor of Class Normal girls.
 *        
 *
 *  set the corresponding values passed and initialize all variables.
 */
	normalgirl (char name[], int attractiveness, int intelligence, int man_budget, int criteria){
		strcpy (this->name, name);
		this->attractiveness = attractiveness;
		this->intelligence = intelligence;
		this->man_budget = man_budget;
		this->criteria = criteria;
		this->type = 1;
		this->committed = 0;
		this->happiness = 0.0;
	}
};
#endif
