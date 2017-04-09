#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <time.h>
#include "girls.hpp"
using namespace std;

int main(){
	int n, k;
	srand (time(NULL));
	n = (rand() % 6) + 4;
	k = (rand() % 5) + 4;
	freopen ("gngirls.txt", "w",stdout);
	char g[n][k+1];
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < k; j++){
			g[i][j] = (char) ((rand () %26) + 97);
		}
		g[i][j] = '\0';
	}
	int attr[n], intell[n], man_budget[n], type[n], criteria[n];
	for (i = 0; i < n; i++){
		attr[i] = (rand() % 10) + 1;
		intell[i] = (rand() % 10) + 1;
		man_budget[i] =(rand() % 8000) + 1000;
		type[i] = rand() % 3;
		criteria[i] = rand() % 3;
		//commit[i] = 0;
	}
	for (i = 0; i < n; i++){
		cout << g[i] << " " << attr[i] << " " << intell[i] << " " << man_budget[i] << " " << criteria[i] << " " << type[i] << " " << endl;
	}
	fclose (stdout);
	return 0;
}