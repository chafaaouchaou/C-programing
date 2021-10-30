#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//PARTIE DECLARATION
	
	int i,x;
	
	
	//PARTIE INSTRUCTION
	printf("enter a nember\n");
	
	scanf("%d",&x);
	
	printf("the multiplication table of %d is \n",x);
	
	
	for(i=1;i<10;i++){
		
		printf("%d * %d = %d\n",x,i,x*i);
		
	}
	
	
	
	
	return 0;
}




