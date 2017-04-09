#ifndef FINDGF_HPP
#define FINDGF_HPP
#include "couple.hpp"
#include "makepair.hpp"

class findgf/*! \brief Class findgf.
 *        
 *
 *  Class that has description of ques7.
 */{
public:
	/*! Calculating index of the girlfriend of boy passed */
	int getindex (boys b, couple grp[], int cn, int bb, boys guy[]);
};
#endif
