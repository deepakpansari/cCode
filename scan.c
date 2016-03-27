/* Code for taking user data */
/* Author DEEPAK KUMAR PANSARI */

#include <stdio.h>

int main(){
	int in,out;

	printf("Hey user may I know your age: ");
	scanf("%d",&in);
	if((65-in)>0)
	printf("Oh!! Great your remaining life is :%d\n",65-in);
	else
	printf("WTF!! You are still alive :-(\n");
	printf("Ok bye bye!!\n\n");
	return 0;
}
