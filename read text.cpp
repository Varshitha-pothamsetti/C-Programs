#include<stdio.h>
int main()
{
	FILE*file;
	char textToWrite[]="Hello,this is some text.";
	char buffer[100];
	file=fopen("example.txt","W");
	if(file == NULL){
		perror("error opening file for writing");
		return 1;
	}
	fprintf(file,"%s",textToWrite);
	fclose(file);
	file=fopen("example.txt","r");
	if(file == NULL){
		perror("error opening file for reading");
		return 2;
	}
	fgets(buffer,sizeof(buffer),file);
	fclose(file);
	printf("Read from file:%s\n",buffer);
	return 0;
}
