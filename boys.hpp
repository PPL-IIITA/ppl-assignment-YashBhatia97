#ifndef BOYS_HPP
#define BOYS_HPP
#include "girls.hpp"
#include <string.h>
class boys/*! \brief Class boys.
 *        
 *
 *  Class that has description of boys.
 */{
public:
	/*! Name of the Boy */
	char name[10];
	/*! Attractiveness of the Boy */
	int attractiveness;
	/*! Intelligence of the Boy */
	int intelligence;
	/*! Budget of the Boy */
	int budget;
	/*! Criteria of the Boy: Min attraction requirement of girl */
	int criteria;
	/*! Type of the Boy: The Miser, The Generous and The Geek  */
	int type;
	/*! Relationship status of the Boy */
	int committed;
	/*! Happiness of the Boy */
	double happiness;
	/*! Calculating happiness of the Boy */
	boys calbfhap (boys bf, int gifting[], girls gf);
};
#endif