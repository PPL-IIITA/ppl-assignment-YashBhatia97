#ifndef FINDGFSEARCH_HPP
#define FINDGFSEARCH_HPP
#include "couple.hpp"
#include "makepair.hpp"
#include "findgf.hpp"
#include "findgflinear.hpp"
#include "findgfbs.hpp"
#include "findgfhash.hpp"

class findgfsearch/*! \brief Class findgfsearch.
 *        
 *
 *  Class that has description of ques 7.
 */{
public:
	/*! return which method to chose among 3  for a given boy given in ques */
	int getchoice (boys b, couple grp[], int cn, int bb, boys guy[], int k);
};
#endif
