// Ques no (c)

#include <stdio.h>
void year_print(int ,int);
int main(){

	int year;
	printf("Type any Year here :");
	scanf("%d",&year);
	if(year%100==0)
		if(year%400==0)
			year_print(year,1);
		else
			year_print(year,0);
	else if(year%4==0)
		year_print(year,1);
	else
		year_print(year,0);



return 0;
}


void  year_print(int year,int condition){
	if(condition==1)
	printf("Hey %d is a leap year\n\n",year);
	else 
	printf("%d is not a leap year\n\n",year);
}
