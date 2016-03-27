#include <stdio.h>

int main(){

	printf("Hello World \n"); //printing the first line
	
	int i=10;		//assigning an integer in a variable
	printf("%d\n",i);	//printing it out
/*
	int j;			//initializing variable for for loop
	for(j=1;j<9199999999999999999;j=2*j*j){	//loop for checking the compiler bit (in this case it is 64 bit)
	printf("%d\n",j);	//printing on the screen
	if(j==0)break;		//if value of j exceed from the limit then braek the loop
	}
*/
	int x = 22.98;
	printf("%d\n",x);

	double y = 45e-10;	//defining a double variable
	printf("double y = %e\n",y);//printing it by %e
	
	char me='d';
	printf("Hey my name start with: %c\n",me);//printing character by %c

	return 0;
	}
