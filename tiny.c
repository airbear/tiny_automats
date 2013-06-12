#include <stdio.h>
#define qwerty 4
#define erty 2
int ar[qwerty*erty];

int main () {
	int i,flag;
	int k = qwerty*erty-1; //последний индекс
	for(i=0; i<qwerty*erty; i++)
		ar[i] = 0;
	while(k != -1) {
		flag = 1;
		for(i=0; i<qwerty*erty; i++)
			printf("%d ", ar[i]);
		ar[0]++;
		for(i=0; i<=k-1; i++)
			if((ar[i] == qwerty) && (k!=0) ) {
				ar[i] = 0;
				ar[i+1]++;
				
			}
		if(ar[k] == qwerty-1){
			k--;
		}
		printf("\n");
	}
}

