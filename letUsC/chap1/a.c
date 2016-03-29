// Ques no (a) 

#include <stdio.h>

int main(){

	float selling_price,cost_price,amount;

	printf("Give selling Price of the product: ");
	scanf("%f",&selling_price);
	printf("Give cost price of the product: ");
	scanf("%f",&cost_price);
	amount = selling_price-cost_price;
	if(amount>0)
	printf("Yahh!! you made a profit of %f \n\n",amount);
	else
	printf("Oh no!! you made a loss of %f \n\n",(-1)*amount);




return 0;
}
