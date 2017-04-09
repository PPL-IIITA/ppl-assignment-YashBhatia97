#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <time.h>
#include "boys.hpp"
using namespace std;

int main(){
	int n, k;
	srand (time (NULL));
	n = (rand() % 8) + 8;
	k = (rand() % 5) + 2;
	freopen ("gnboys.txt", "w",stdout);
	char b[n][k+1];
	srand (time(NULL));
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < k; j++){
			b[i][j] = (char) ((rand () %26) + 97);
		}
		b[i][j] = '\0';
	}
	int attr[n], intell[n], budget[n], type[n], criteria[n];
	for (i = 0; i < n; i++){
		attr[i] = (rand() % 10) + 1;
		intell[i] = (rand() % 10) + 1;
		budget[i] =(rand() % 8000) + 2000;
		type[i] = rand() % 3;
		criteria[i] = (rand() % 7);
		//commit[i] = 0;
	}
	for (i = 0; i < n; i++){
		cout << b[i] << " " << attr[i] << " " << intell[i] << " " << budget[i] << " " << criteria[i] << " " << type[i] << " " << endl;
	}
	fclose (stdout);
	return 0;
}