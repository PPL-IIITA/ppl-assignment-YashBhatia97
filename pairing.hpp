#ifndef PAIRING_CPP
#define PAIRING_CPP
#include <iostream>
#include "matching.hpp"
using namespace std;

class pairing/*! \brief Class pairing.
 *        
 *
 *  Class that has a method to allocate boys and girls to form couple as per the criteria
 */{
public:
	/*! Function to fetch the data from input files */ 
	void allocarray (boys guy[], girls gals[], int *bb, int *gg);
	/*! Function to form output file and form couples*/
	int creategrp (boys guy[], girls gals[], int bb, int gg, couple grp[]);
};
#endif