#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "couple.hpp"
#include "findgfsearch.hpp"
#include "makepair.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	int i, j;
	makepair mp;
	mp.makingpair();
	freopen ("q7output.txt", "w", stdout);
	int n = mp.cn;
	fclose (stdout);
	int index;
	for (i = 0; i < mp.bb; i++){
		int k = (rand() % 3);
		if (mp.guy[i].budget % 1 == 0){
			findgfsearch fgs;
			index = fgs.getchoice (mp.guy[i], mp.grp, mp.cn, mp.bb, mp.guy, k);
			freopen ("q7output.txt", "a", stdout);
			if (index == -1){
				cout << "BOY: " << mp.guy[i].name << " Girl: No Girl " << endl;
			}
			else {
				cout << "BOY: " << mp.guy[i].name << " Girl: " << mp.grp[index].g1.name << endl;
			}
			fclose (stdout);
		}
	}
	return 0;
}