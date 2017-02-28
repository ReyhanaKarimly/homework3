#include <stdio.h>
#include <conio.h>
void main()
{
	printf("k=2 enter x to calculate a)y=((k*x+5)*(k*k*x+6))/(x+5);\n\t\t\t b)z=k*x+3;\n\t\t\t x=");
	const float k=2;
	float y,x,z;
	scanf("%f",&x);
	y=((k*x+5)*(k*k*x+6))/(x+5);
	z=k*x+3;
	printf("a)y=((2*x+5)*(4*x+6))/(x+5)=%.2f",y);
	printf("\nz=2*k+3=%.2f",z);
	getch();
}