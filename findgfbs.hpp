#ifndef FINDGBS_HPP
#define FINDGFBS_HPP
#include "couple.hpp"
#include "findgf.hpp"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class findgfbs: public findgf/*! \brief Class findgfbs.
 *        
 *
 *  Class that has description of ques7.
 */{
public:
	/*! returning index of boy x */
	int binarySearch(couple arr[], int l, int r, boys x)
	{
		if (r >= l)
		{
			int mid = l + (r - l)/2;
			if (strcmp (arr[mid].b1.name, x.name) == 0)  return mid;
			if (strcmp(arr[mid].b1.name, x.name) > 0) return binarySearch(arr, l, mid-1, x);
			return binarySearch(arr, mid+1, r, x);
		}
		return -1;
	}
	/*! sorting and then returning index passed from binarysearch function */
	int getindex (boys b, couple grp[], int cn, int bb, boys guy[]){
		int i, j, index;
		for (i = 0; i < cn; i++){
			for (j = 0; j < cn-1; j++){
				if ((strcmp (grp[j].b1.name, grp[j+1].b1.name)) > 0){
					couple temp = grp[j];
					grp[j] = grp[j+1];
					grp[j+1] = temp;
				}
			}
		}
		index = binarySearch (grp, 0, cn-1, b);
		return index;
	}
};
#endif
