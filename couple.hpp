#ifndef COUPLE_HPP
#define COUPLE_HPP
#include "boys.hpp"

class couple/*! \brief Class couple.
 *        
 *
 *  Class that has description of couples.
 */{
public:
	/*! Object type of Boy */
	boys b1;
	/*! Object type of Girl */
	girls g1;
	/*! Happiness of the Couple */
	double happiness;
	/*! Compatibility of the Couple */
	int compatibility;
	/*! Calculating happiness of the Couple */
	couple calchap (couple c, int gifting[]);
	/*! Calculating compatibility of the Couple */
	couple calcomp (couple c);
};
#endif