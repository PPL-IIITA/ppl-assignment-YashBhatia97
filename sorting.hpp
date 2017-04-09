#ifndef SORTING_HPP
#define SORTING_HPP
#include "giftalloc.hpp"
using namespace std;

class sorting/*! \brief Class sorting.
 *        
 *
 *  Class that has a method to sort the couples as per the criteria
 */{
public:
	/*! This function sorts the Couples according to their Happiness in decreasing order. */
	void sorthapp(couple coup[], int n);
	/*! This function sorts the Couples according to their Compatibility in decreasing order. */
	void sortcomp (couple coup[], int n);
	/*! This function sorts the Couples according to their Happiness in increasing order. */
	void sorthappinc (couple coup[], int n);
};
#endif