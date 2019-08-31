#include <math.h>
#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, count, state, sum;
	double avg, sd, variance;
	sum = 0;

	while(( c = getchar()) != EOF){
		if ( c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		else{
			if(state == OUT){
				state = IN;
				++count;
			}
		}
	  }
	}
	avg = sum / (double)count;
	sd = sqrt((variance / count) - pow(avg, 2.0));
	printf("Avg : ");
	printf("Sd : ");

	return 0;
}