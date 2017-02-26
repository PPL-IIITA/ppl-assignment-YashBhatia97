#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "gifts.hpp"
using namespace std;

int main(){
	srand (time(NULL));
	int n1, n2, n3;
	n1 = (rand () % 15) + 15;
	n2 = (rand () % 10) + 5;
	n3 = (rand () % 15) + 5;
	int i, j;
	gifts gft[10000];
	freopen ("gifts.txt", "w", stdout);
	for (i = 1; i <= n1; i++){
		gft[i].name = i;
		gft[i].price = (rand() % 1701) + 300;
		gft[i].value = (rand() % 8) + 2;
		gft[i].type = 0;
		gft[i].luxrating = -1;
		gft[i].luxdifficulty = -1;
		gft[i].utilityvalue = -1;
		gft[i].utilityclass = -1;
	}
	for (i = n1+1; i <= n1+n2; i++){
		gft[i].name = i;
		gft[i].price = (rand() % 8000) + 2000;
		gft[i].value = (rand() % 6) + 5;
		gft[i].type = 1;
		gft[i].luxrating = (rand() % 8) + 2;
		gft[i].luxdifficulty = (rand() % 6)+2;
		gft[i].utilityvalue = -1;
		gft[i].utilityclass = -1;	
	}
	for (i = n1+n2+1; i <= n1+n2+n3; i++){
		gft[i].name = i;
		gft[i].price = (rand() % 4000) + 1000;
		gft[i].value = (rand() % 7) + 3;
		gft[i].type = 2;
		gft[i].luxrating = -1;
		gft[i].luxdifficulty = -1;
		gft[i].utilityvalue = (rand() % 7) + 2;
		gft[i].utilityclass = (rand()% 5) + 1;
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
		cout << gft[i].name << " " << gft[i].price << " " << gft[i].value << " " << gft[i].type << " " << gft[i].luxrating << " " << gft[i].luxdifficulty << " " << gft[i].utilityvalue << " " << gft[i].utilityclass << endl;
	}
	fclose(stdout);
	return 0;
}