#include <stdio.h>

int main(int argc, char *argv[]){
	long long max = atoi(argv[1]);
	char zwischen = 0;
	for(long long i = 2; i <= max; i++){
		for(long long j = 2; j <= i/2; j++){
			if((i%j) == 0){
				zwischen = 1;
				break;
			}
		}
		if(zwischen == 0){
			printf("%i\n",i);
		}
		zwischen = 0;
	}
	return 0;
}
