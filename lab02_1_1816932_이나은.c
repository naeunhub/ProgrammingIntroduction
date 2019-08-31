#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
	int c, nl, nw, nc, state, wordlen;

	state = OUT;
	nl = nw = nc = wordlen = 0;

	while ((c=getchar()) != EOF){
		++nc;

		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t'){
			if (state == IN) {
				printf("word length = %d\n",wordlen);
			}
			state = OUT;
			wordlen = 0;
		}
		else {
			wordlen++;
			if (state == OUT) {
				state = IN;
				++nw;
			}
		}
		
	}
	printf("%d %d %d\n", nl, nw, nc);
}