#include <stdio.h>

int main(int argc, char *argv[]){
	register int max = atoi(argv[1]);
	register int zwischen = 0;
	printf("1\n2\n");
	for(register int i = 3; i <= max;i++){
		for(register int j = 2; j <= i-1; j++){
			if((i%j) == 0){
				zwischen = 1;
				break;
			}
		}
		if(zwischen == 0){
			printf("%i\n",i);
		}else{
			zwischen = 0;
		}
		zwischen = 0;
	}
	return 0;
}
