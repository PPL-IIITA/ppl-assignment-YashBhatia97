#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "sorting.hpp"
using namespace std;

int main(){
	srand(time(NULL));
	int gifting[100][9];
	couple coup[100];
	gifts gft[100];
	int i, j;
	giftalloc gggg;
	int n = gggg.allocating (gifting, coup, gft);
	int k = (rand() % (n-1)) + 1;
	for (i = 1; i <= n; i++){
		couple ccc;
		coup[i] = ccc.calchap (coup[i], gifting[i]);
		coup[i] = ccc.calcomp (coup[i]);
	}
	freopen ("q2output.txt", "a", stdout);
	for (i = 1; i <=n; i++){
		cout << "BOY: " << coup[i].b1.name << " Girl: " << coup[i].g1.name << " Essential Gift: " << gifting[i][1] << " Luxury Gift: " << gifting[i][4] << " Utility Gift:" << gifting[i][7] << endl;
	}
	sorting sss;
	sss.sorthapp (coup, n);
	for (i = 1; i <=k; i++){
		cout << "BOY: " << coup[i].b1.name << " Girl: " << coup[i].g1.name << " happiness: " << coup[i].happiness << endl;
	}
	sss.sortcomp (coup, n);
	for (i = 1; i <=k; i++){
		cout << "BOY: " << coup[i].b1.name << " Girl: " << coup[i].g1.name << " compatibility: " << coup[i].compatibility << endl;
	}
	fclose (stdout);
	return 0;
}