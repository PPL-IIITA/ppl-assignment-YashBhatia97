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
	int n = mp.cn;
	for (i = 0; i < n; i++){
		couple ccc;
		mp.grp[i] = ccc.calchap (mp.grp[i], mp.gifting[i]);
		mp.grp[i] = ccc.calcomp (mp.grp[i]);
	}
	//freopen ("q6output.txt", "w", stdout);
	sorting sss;
	sss.sorthappinc (mp.grp, n);
	int c;
	int t = (rand() % 30) + 1;
	int k;
	for (k = 0; k < t; k++){
		c = 0;
		for (i = 0; i < n; i++){
			if (mp.grp[i].happiness < (t*100)){
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
			else {
				mp.grp[c].b1 = mp.grp[i].b1;
				mp.grp[c].g1 = mp.grp[i].g1; 
				c++;
			}
		}
		//freopen ("q6output.txt", "a", stdout);
		//cout << "kank" << c << endl;
		//fclose (stdout);
		n = c;
		mp.cn = n;
		mp.remaking();
		for (i = 0; i < n; i++){
			couple ccc;
			mp.grp[i] = ccc.calchap (mp.grp[i], mp.gifting[i]);
			mp.grp[i] = ccc.calcomp (mp.grp[i]);
		}
		/*freopen ("q6output.txt", "a", stdout);
		cout << "gogo" << n << endl;
		for (i = 0; i < n; i++){
			cout << mp.grp[i].happiness << endl;
		}
		fclose (stdout);*/
		sss.sorthappinc (mp.grp, n);
	}
	mp.cn = n;
	
	freopen ("q6output.txt", "w", stdout);
	cout << t << " " << n << endl;
	for (i = 0; i < n; i++){
		cout << "BOY: "<< mp.grp[i].b1.name << " " << mp.grp[i].b1.attractiveness << " " << mp.grp[i].b1.intelligence << " " << mp.grp[i].b1.budget << " " << mp.grp[i].b1.criteria << " " << mp.grp[i].b1.type << " " << mp.grp[i].b1.committed << endl;
		cout << "GIRL: "<< mp.grp[i].g1.name << " " << mp.grp[i].g1.attractiveness << " " << mp.grp[i].g1.intelligence << " " << mp.grp[i].g1.man_budget << " " << mp.grp[i].g1.criteria << " " << mp.grp[i].g1.type << " " << mp.grp[i].g1.committed << endl;
	}
	fclose (stdout);
	return 0;
}