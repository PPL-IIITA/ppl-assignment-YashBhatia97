#ifndef GIRLS_HPP
#define GIRLS_HPP
using namespace std;
#include <string.h>
class girls/*! \brief Class girls.
 *        
 *
 *  Class that has description of girls.
 */{
public:
	/*! Name of the Girl */
	char name[10];
	/*! Attractiveness of the Girl */
	int attractiveness;
	/*! Intelligence of the Girl */
	int intelligence;
	/*! Maintenance Budget of the Girl */
	int man_budget;
	/*! Criteria of the Girl to choose out of: Most Attractive, Most Rich, Most Intelligent */
	int criteria;
	/*! Type of the Girl: The Choosy, The Normal, The Desperate */
	int type;
	/*! Relationship status of the Girl */
	int committed;
	/*! Happiness of the Girl */
	double happiness;
	/*! Calculating happiness of the Girl */
	girls calgfhap(girls gf,int gifting[]);
};
#endif