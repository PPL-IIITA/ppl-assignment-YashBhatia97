#include <iostream>
#include "giftalloc.hpp"
#include "sorting.hpp"
using namespace std;

void sorting::sorthapp(couple coup[], int n)/*! This function sorts the Couples according to their Happiness. */
{
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j < n; j++){
			if (coup[j].happiness < coup[j+1].happiness){
				couple temp = coup[j];
				coup[j] = coup[j+1];
				coup[j+1] = temp;
			}
		}
	}
}
void sorting::sortcomp (couple coup[], int n)/*! This function sorts the Couples according to their Compatibility. */
{
	int i, j;
	for (i = 1; i <= n; i++){
		for (j = 1; j < n; j++){
			if (coup[j].compatibility < coup[j+1].compatibility){
				couple temp = coup[j];
				coup[j] = coup[j+1];
				coup[j+1] = temp;
			}
		}
	}
} 