#include <stdio.h>
int main(){

    int N = 0,val = 0;
    int i;
    scanf("%d", &N);

    char nmr[N];
    scanf("%s", nmr);

    for(i = 0; i < (N - 2); i++){
        if(nmr[i] == '1' && nmr[i+1] == '0' && nmr[i+2] == '0'){
            val++;
        }
    }

    printf("%d", val);
	return 0;
}
