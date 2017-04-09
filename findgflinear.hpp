#ifndef FINDGFLINEAR_HPP
#define FINDGFLINEAR_HPP
#include "couple.hpp"
#include "findgf.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class findgflinear: public findgf/*! \brief Class findgflinear.
 *        
 *
 *  Class that has description of ques7.
 */{
public:
	/*! return index of girlfriend according to method 1 of ques 7 */
	int getindex (boys b, couple grp[], int cn, int bb, boys guy[]){
		int i, j;
		int index;
		int flag = 0;
		for (i = 0; i < cn; i++){
			if (!(strcmp (b.name, grp[i].b1.name))){
				index = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1){
			return index;	
		} else {
			return -1;
		}
		
	}
};
#endif
