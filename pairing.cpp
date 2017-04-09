#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "matching.hpp"
#include "pairing.hpp"
using namespace std;

void pairing::allocarray (boys guy[], girls gals[], int *bb, int *gg){
	FILE *fp1, *fp2;
	fp1 = fopen ("gnboys.txt", "r");
	fp2 = fopen ("gngirls.txt", "r");
	char tname[10];
	int tattr, tintel, tbud, tcrit, ttype; 
	int i, j;
	for (i = 0; !feof (fp1);i++){
		fscanf(fp1,"%s %d %d %d %d %d", tname, &tattr, &tintel, &tbud, &tcrit, &ttype);
		boys *temp;
		if (ttype == 0){
			temp = new miserboy (tname, tattr, tintel, tbud, tcrit);
		}
		else if (ttype == 1){
			temp = new generousboy (tname, tattr, tintel, tbud, tcrit);
		}
		else {
			temp = new geekboy (tname, tattr, tintel, tbud, tcrit);
		}
		guy[i] = *temp;
	}
	*bb = i-1;
	for (i = 0; !feof (fp2);i++){
		fscanf(fp2,"%s %d %d %d %d %d", tname, &tattr, &tintel, &tbud, &tcrit, &ttype);
		girls *temp;
		if (ttype == 0){
			temp = new choosygirl (tname, tattr, tintel, tbud, tcrit);
		}
		else if (ttype == 1){
			temp = new normalgirl (tname, tattr, tintel, tbud, tcrit);
		}
		else {
			temp = new desperategirl (tname, tattr, tintel, tbud, tcrit);
		}
		gals[i] = *temp;
	}
	*gg = i-1;
	fclose (fp1);
	fclose (fp2);
}
int pairing::creategrp (boys guy[], girls gals[], int bb, int gg, couple grp[]){
	int c = 0;
	int i;
	for (i = 0; i < gg; i++){
		matching m;
		int bd = m.match(gals[i], gg, bb, guy);
		if (bd != -1){
			grp[c].g1 = gals[i];
			grp[c].b1 = guy[bd];
			gals[i].committed = 1;
			guy[bd].committed = 1;
			grp[c].b1.committed = 1;
			grp[c].g1.committed = 1;
			/*cout << "BOY: "<< grp[i].b1.name << " and GIRL: " << grp[i].g1.name << endl;
			for(j = 0; j < bb; j++){
				cout << guy[j].name << " " << guy[j].attractiveness << " " << guy[j].intelligence << " " << guy[j].budget << " " << guy[j].criteria << " " << guy[j].type << " " << guy[j].committed << endl;
			}
			for(j = 0; j < gg; j++){
				cout << gals[j].name << " " << gals[j].attractiveness << " " << gals[j].intelligence << " " << gals[j].man_budget << " " << gals[j].criteria << " " << gals[j].type << " " << gals[j].committed << endl;
			}*/
			c++;
		}
	}
	freopen ("output.txt", "w", stdout);
	for(i = 0; i < c; i++){
		cout << "BOY: "<< grp[i].b1.name << " and GIRL: " << grp[i].g1.name << endl;
	}
	fclose (stdout);
	freopen ("couple.txt","w",stdout);
	cout << c << endl;
	for(i = 0; i < c; i++){
		cout << "BOY: "<< grp[i].b1.name << " " << grp[i].b1.attractiveness << " " << grp[i].b1.intelligence << " " << grp[i].b1.budget << " " << grp[i].b1.criteria << " " << grp[i].b1.type << " " << grp[i].b1.committed << endl;
		cout << "GIRL: "<< grp[i].g1.name << " " << grp[i].g1.attractiveness << " " << grp[i].g1.intelligence << " " << grp[i].g1.man_budget << " " << grp[i].g1.criteria << " " << grp[i].g1.type << " " << grp[i].g1.committed << endl;
	}
	fclose (stdout);
	return c;
}