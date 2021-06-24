#include <stdio.h>       
int main() 
{
	int width=5,height=7,area,perimeter;
	perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d cm\n", perimeter);
	area = height * width;
	printf("Area of the rectangle = %d square cm\n", area);

return(0);
}
