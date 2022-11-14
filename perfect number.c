#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int N,i;
	int sum=0;
	printf("Enter a natural number:%d", N);
	scanf("%d",&N);
	
	for (i=1;i<N;i++){
		if(N % i==0){
			sum=sum+i;
		}
	}
	if(sum==N){
		printf("THe %d is a perfect number.", N);
	    }
	       else {
		printf("The number %d is not a perfect number.",N);
	}
	return 0;
}
