#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int vetA[10];
	int vetB[10];
	int i;

	for(i=1; i<=10; i++){
		vetB[i] = 0;
		if(i,2 == 0){
			vetA[i] = i;
		}
		else{
			vetA[i] = 2*i;			
		} 
	}
	
	for(i=1; i<=10; i++){
		while(vetA[i]>i){
			vetB[i] = vetA[i];
			vetB[i] = vetA[i] - 1;
		}
	}

	for(i=1; i<=10; i++){
		printf("%d",vetA[i]);
	}
	for(i=0; i<10; i++){
		printf("%d",vetB[i]);
	}

	
return 0;
}

