#include <stdio.h>
#include <stdlib.h>

int main(){
	register int index = 0;
	char primzahl[600000];
	register char zwischen = 0;
	for(register int i = 2; i <= 1000000; ++i){
		for(register int j = 2; j*j <= i; ++j){
			if((i%j) == 0){
				zwischen = 1;
				break;
			}
		}
		if((zwischen & 1) == 0){
			index += sprintf(primzahl+index,"%d\n", i);
		}else{
			zwischen = 0;
		}
	}
	puts(primzahl);
	return 0;
}
