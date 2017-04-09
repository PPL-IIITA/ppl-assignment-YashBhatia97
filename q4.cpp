#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "couple.hpp"
#include "sorting.hpp"
#include "matching.hpp"
#include "makepair.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	int i, j;
	makepair mp;
	mp.makingpair();
	freopen ("q4output.txt", "w", stdout);
	int n = mp.cn;
	int k = (rand() % (n-1)) + 1;
	for (i = 0; i < n; i++){
		couple ccc;
		mp.grp[i] = ccc.calchap (mp.grp[i], mp.gifting[i]);
		mp.grp[i] = ccc.calcomp (mp.grp[i]);
	}
	sorting sss;
	sss.sorthappinc (mp.grp, n);
	int c = 0;
	for (i = 0; i < k; i++){
		char temp[10];
		strcpy (temp, mp.grp[i].b1.name);
		matching matg;
		int bd = matg.match (mp.grp[i].g1, mp.gg, mp.bb, mp.guy);
		if (bd != -1){
			mp.guy[bd].committed = 1;
			mp.grp[c].b1 = mp.guy[bd];
			mp.grp[c].g1 = mp.grp[i].g1;
			for (j = 0; j < mp.bb; j++){
				if (strcmp (mp.guy[j].name, temp)){
					mp.guy[j].committed = 0;
					mp.guy[j].happiness = 0.0;
					break;
				}
			}
			c++;
		}
		else {
			for (j = 0; j < mp.gg; j++){
				if (strcmp (mp.gals[j].name, mp.grp[i].g1.name)){
					mp.gals[j].committed = 0;
					mp.gals[j].happiness = 0.0;
					break;
				}
			}
			for (j = 0; j < mp.bb; j++){
				if (strcmp (mp.guy[j].name, temp)){
					mp.guy[j].committed = 0;
					mp.guy[j].happiness = 0.0;
					break;
				}
			}
		}
	}
	for (i = k; i < n; i++){
		mp.grp[c].b1 = mp.grp[i].b1;
		mp.grp[c].g1 = mp.grp[i].g1; 
		c++;
	}
	n = c;
	mp.cn = c;
	mp.remaking();
	freopen ("q4output.txt", "a", stdout);
	//cout << k << " " << n << endl;
	for (i = 0; i < n; i++){
		cout << "BOY: "<< mp.grp[i].b1.name << " " << mp.grp[i].b1.attractiveness << " " << mp.grp[i].b1.intelligence << " " << mp.grp[i].b1.budget << " " << mp.grp[i].b1.criteria << " " << mp.grp[i].b1.type << " " << mp.grp[i].b1.committed << endl;
		cout << "GIRL: "<< mp.grp[i].g1.name << " " << mp.grp[i].g1.attractiveness << " " << mp.grp[i].g1.intelligence << " " << mp.grp[i].g1.man_budget << " " << mp.grp[i].g1.criteria << " " << mp.grp[i].g1.type << " " << mp.grp[i].g1.committed << endl;
	}
	fclose (stdout);
	return 0;
}