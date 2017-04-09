#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "couple.hpp"
#include "sorting.hpp"
#include "makepair.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	int i, j;
	makepair mp;
	mp.makingpair();
	int n = mp.cn;
	int k = (rand() % (n-1)) + 1;
	for (i = 0; i < n; i++){
		couple ccc;
		mp.grp[i] = ccc.calchap (mp.grp[i], mp.gifting[i]);
		mp.grp[i] = ccc.calcomp (mp.grp[i]);
	}
	freopen ("q3output.txt", "a",stdout);
	for (i = 0; i < n; i++){
		cout << "BOY: " << mp.grp[i].b1.name << " Girl: " << mp.grp[i].g1.name << " Essential Gift: " << mp.gifting[i][1] << " Luxury Gift: " << mp.gifting[i][4] << " Utility Gift:" << mp.gifting[i][7] << endl;
	}
	sorting sss;
	sss.sorthapp (mp.grp, n);
	for (i = 0; i < k; i++){
		cout << "BOY: " << mp.grp[i].b1.name << " Girl: " << mp.grp[i].g1.name << " happiness: " << mp.grp[i].happiness << endl;
	}
	sss.sortcomp (mp.grp, n);
	for (i = 0; i < k; i++){
		cout << "BOY: " << mp.grp[i].b1.name << " Girl: " << mp.grp[i].g1.name << " compatibility: " << mp.grp[i].compatibility << endl;
	}
	fclose (stdout);
	return 0;
}