#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "couple.hpp"
#include "matching.hpp"

int matching::match(girls g2, int gg, int bb,boys *guy){
	int i = 0;
	int flag = 0;
	int j = 0;
	int minn1 = g2.man_budget;
	int minn2 = 0;
	if(g2.criteria == 1){
		for (i = 0; i < bb; i++){
			if (guy[i].committed == 0 && guy[i].criteria <= g2.attractiveness){
				if(guy[i].budget >= minn1){
					flag = 1;
					minn1 = guy[i].budget;
					j = i;
				}
			}
		}
	}
	else if (g2.criteria == 0){
		for (i = 0; i < bb; i++){
			if (guy[i].committed == 0 && guy[i].criteria <= g2.attractiveness){
				if(guy[i].budget >= g2.man_budget && guy[i].attractiveness >= minn2){
					flag = 1;
					minn2 = guy[i].attractiveness;
					j = i;
				}
			}
		}
	}
	else {
		for (i = 0; i < bb; i++){
			if (guy[i].committed == 0 && guy[i].criteria <= g2.attractiveness){
				if(guy[i].budget >= g2.man_budget && guy[i].intelligence >= minn2){
					flag = 1;
					minn2 = guy[i].intelligence;
					j = i;
				}
			}
		}
	}
	if (flag == 0){
		return -1;
	} else {
		return j;
	}

}