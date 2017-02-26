#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "gifts.hpp"
#include "couple.hpp"
#include "giftalloc.hpp"
using namespace std;
int giftalloc::allocating (int gifting[][9],couple coup[], gifts gft[]){
	int i, j;
	freopen ("gifts.txt","r", stdin);
	int g;
	cin >> g;
	for (i = 1; i <= g; i++){
		cin >> gft[i].name >> gft[i].price >> gft[i].value >> gft[i].type >> gft[i].luxrating >> gft[i].luxdifficulty >> gft[i].utilityvalue >> gft[i].utilityclass;
	}
	fclose (stdin);
	int n;
	 	//cout <<"hi" << endl;
	freopen ("couple.txt", "r", stdin);
	cin >> n;
	char tmp[10];
	for (i = 1; i <= n; i++){
		cin >> tmp >> coup[i].b1.name >> coup[i].b1.attractiveness >> coup[i].b1.intelligence >> coup[i].b1.budget >> coup[i].b1.criteria >> coup[i].b1.type >>coup[i].b1.committed;
		cin >> tmp >> coup[i].g1.name >> coup[i].g1.attractiveness >> coup[i].g1.intelligence >> coup[i].g1.man_budget >> coup[i].g1.criteria >> coup[i].g1.type >>coup[i].g1.committed; 
	} 	
	fclose (stdin);
	 	//int gifting[n+1][3];
	for (i = 0; i <= n; i++){
		for (j = 0; j < 9; j++){
			gifting[i][j] = 0;
		}
	}
	 	//cout << "hello" << endl;
	for(i = 1; i <= n; i++){
		int sum = 0;
		if(coup[i].b1.type == 0){
			int limit = coup[i].g1.man_budget + (coup[i].b1.budget - coup[i].g1.man_budget)/4;
			for (j = 1; j <= g; j++){
				if(sum + gft[j].price <= limit){
					gifting[i][3*gft[j].type] += gft[j].price;
					gifting[i][3*gft[j].type+1] += 1;
					gifting[i][3*gft[j].type+2] += gft[j].value;
					sum += gft[j].price;
					cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
				}else {
					if(sum < coup[i].g1.man_budget){
						sum += gft[j].price;
						coup[i].b1.budget = sum;
						gifting[i][3*gft[j].type] += gft[j].price;
						gifting[i][3*gft[j].type+1] += 1;
						gifting[i][3*gft[j].type+2] += gft[j].value;
						cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
					}
					break;
				}
			}
		}
		else if (coup[i].b1.type == 1){
			for (j = g; j >= 1; j--){
				if(sum + gft[j].price < coup[i].b1.budget){
					gifting[i][3*gft[j].type] += gft[j].price;
					gifting[i][3*gft[j].type+1] += 1;
					gifting[i][3*gft[j].type+2] += gft[j].value;
					sum += gft[j].price;
					cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
				}
			}
		}
		else {
			int limit = coup[i].g1.man_budget + (coup[i].b1.budget - coup[i].g1.man_budget)/4;
			for (j = 1; j <= g; j++){
				if(sum + gft[j].price <= limit){
					gifting[i][3*gft[j].type] += gft[j].price;
					gifting[i][3*gft[j].type+1] += 1;
					gifting[i][3*gft[j].type+2] += gft[j].value;
					sum += gft[j].price;
					cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
				}else {
					if(sum < coup[i].g1.man_budget){
						sum += gft[j].price;
						coup[i].b1.budget = sum;
						gifting[i][3*gft[j].type] += gft[j].price;
						gifting[i][3*gft[j].type+1] += 1;
						gifting[i][3*gft[j].type+2] += gft[j].value;
						cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
					}
					break;
				}
			}
			if(gifting[i][1] > 0){
				continue;
			} else {
				for(; j <= g; j++){
					if(gft[j].type == 1){
						if (sum + gft[j].price < coup[i].b1.budget){
							sum += gft[j].price;
							gifting[i][3] += gft[j].price;
							gifting[i][3*gft[j].type+1] += 1;
							gifting[i][3*gft[j].type+2] += gft[j].value;
							cout << "Boy: " << coup[i].b1.name << " gave Gift:" << gft[j].name << " price: " << gft[j].price << " value: " << gft[j].value <<  " to Girl: " << coup[i].g1.name << endl;
							break;
						}
					}
				}
			}
		}
	}
	return n;
}