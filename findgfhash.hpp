#ifndef FINDGFHASH_HPP
#define FINDGHASH_HPP
#include "couple.hpp"
#include "findgf.hpp"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class findgfhash: public findgf/*! \brief Class findgfhash.
 *        
 *
 *  Class that has description of ques 7.
 */{
public:
	/*! return index according to method 3 of ques 7 */
	int getindex (boys b, couple grp[], int cn, int bb, boys guy[]){
		int hash[bb+1];
		int i, j, k;
		for (i = 0; i < bb; i++){
			if (strcmp(guy[i].name, b.name) == 0){
				k = i;
			}
			int flag = 0;
			for (j = 0; j < cn; j++){
				if (!(strcmp (grp[j].b1.name, guy[i].name))){
					hash[i] = j;
					flag = 1;
					break;
				}
			}
			if (flag != 1){
				hash[i] = -1;
			}
		}
		return hash[k];
	}
};
#endif
