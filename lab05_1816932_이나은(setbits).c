#include <stdio.h>

main(){
	char x;
	int i;

	x = 120;
	i = 0;
	while(i<0){
		printf("%d", x);
		x = x+1;
		i = i+1;
	}
	printf("\n");
}