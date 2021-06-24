#include <stdio.h>
int main() 
{
	int x;
	float y;
	printf("\nDistance in km: ");
	scanf("%d",&x);
	printf("\nFuel spent in liters: ");
	scanf("%f", &y);
	printf("\nAverage consumption (km/lt) %.2f ",x/y);
	
	return 0;
}
