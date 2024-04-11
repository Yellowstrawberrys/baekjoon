#include <stdio.h>

void wave() {
    int i,m;
    long long prev[3] = {1, 1, 1}, n=1;
    
    scanf("%d", &m);
	
	for(i=0; i<m-3; i++) {
	    n = prev[0]+prev[1];
        prev[0] = prev[1];
        prev[1] = prev[2];
        prev[2] = n;
	}

    printf("%ld\n", n);
}

int main(){
	int i, t;

    scanf("%d", &t);
    for(i=0;i<t;i++) wave();
	
	return 0 ; 
}
