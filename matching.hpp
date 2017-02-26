#ifndef MATCHING_HPP
#define MATCHING_HPP
#include "couple.hpp"

class matching/*! \brief Class matching.
 *        
 *
 *  Class that has a method to make a perfect match for a particular girl by returning boy's id as per the criteria
 */{
public:
	/*! This function returns the suitable match for a particular girl */
	int match(girls g2, int gg, int bb,boys *guy);
};
#endif