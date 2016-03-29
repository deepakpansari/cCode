// Ques no b 

#include <stdio.h>

int main(){
	
	int number;
	printf("Give any positive Integer number :");
	scanf("%d",&number);
	if(number==0)
	printf("0 is neither even nor odd\n\n");
	else if(number>0){
		if(number%2==0)
		printf("%d is an even Integer\n\n",number);
		else
		printf("%d is an odd Integer\n\n",number);
	}
	else
	printf("%d is negetive so can't find :(\n\n",number);



return 0;
}
