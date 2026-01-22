#include<stdio.h>
struct student
{
	int age;
	char surname;
	float section;
	double percentage;
	char ch;
};
int main()
{
	struct student prabhu;
	printf("%c",prabhu.surname);
	return 0;
}

