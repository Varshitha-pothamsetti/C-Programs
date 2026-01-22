#include<stdio.h>
struct ungalam
{
	int age;
	char surname;
};
int main()
{
	struct ungalam prabhas;
	prabhas.age=32;
	prabhas.surname='p';
	printf("%d",prabhas.age);
	return 0;
}

