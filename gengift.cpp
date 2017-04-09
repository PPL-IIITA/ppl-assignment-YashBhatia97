#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "gifts.hpp"
#include "essentialgift.hpp"
#include "luxurygift.hpp"
#include "utilitygift.hpp"
#include "gengift.hpp"
using namespace std;

int gengift::giftcreate(gifts gft[]){
	srand (time(NULL));
	int n1, n2, n3;
	n1 = (rand () % 15) + 15;
	n2 = (rand () % 10) + 5;
	n3 = (rand () % 15) + 5;
	int i, j;
	//gifts gft[10000];
	freopen ("gifts.txt", "w", stdout);
	for (i = 1; i <= n1; i++){
		gifts *temp;

		int tname = i;
		int tprice = (rand() % 1701) + 300;
		int tvalue = (rand() % 8) + 2;
		int ttype = 0;
		
		temp = new essentialgift (tname, tprice, tvalue);
		gft[i] = *temp;
	}
	for (i = n1+1; i <= n1+n2; i++){
		gifts *temp;

		int tname = i;
		int tprice = (rand() % 8000) + 2000;
		int tvalue = (rand() % 6) + 5;
		int ttype = 1;
		int tluxrating = (rand() % 8) + 2;
		int tluxdifficulty = (rand() % 6)+2;

		temp = new luxurygift (tname, tprice, tvalue, tluxrating, tluxdifficulty);
		gft[i] = *temp;
	}
	for (i = n1+n2+1; i <= n1+n2+n3; i++){
		gifts *temp;

		int tname = i;
		int tprice = (rand() % 4000) + 1000;
		int tvalue = (rand() % 7) + 3;
		int ttype = 2;
		int tutilityvalue = (rand() % 7) + 2;
		int tutilityclass = (rand()% 5) + 1;

		temp = new utilitygift (tname, tprice, tvalue, tutilityvalue, tutilityclass);
		gft[i] = *temp;
	}
	int n = n1 + n2 + n3;
	cout << n << endl;
	for (i = 1; i <= n; i++){
		for (j = 1; j < n; j++){
			if (gft[j].price > gft[j+1].price){
				gifts temp = gft[j];
				gft[j] = gft [j + 1];
				gft[j+1] = temp; 
			}
		}
	}
	for (i = 1; i <= n; i++){
		if (gft[i].type == 0){
			cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << endl;
			//cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << " " << -1 << " " << -1 << " " << -1 << " " << -1 << endl;
		}
		else if (gft[i].type == 1){
			cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << endl;
			//cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << " " << gft[i].luxrating << " " << gft[i].luxdifficulty << " " << -1 << " " << -1 << endl;
		}
		else {
			cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << endl;
			//cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << " " << -1 << " " << -1 << " " << gft[i].utilityvalue << " " << gft[i].utilityclass << endl;
		}
	}
	fclose(stdout);
	return n;
}