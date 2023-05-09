#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	register int index = 0;
	register int max = atoi(argv[1]);
	char *primzahl = malloc(max);
	register char zwischen = 0;
	for(register int i = 2; i <= max; ++i){
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
