#include<stdio.h>
int main(){
    char inputstring[100];
    char outputstring[100];
    scanf("%[^
]s",inputstring);
    int i=0;
    while(inputstring[i]!=NULL){
        outputstring[i]=inputstring[i];
        i++;
    }
    outputstring[i]=NULL;
    printf("%s
",outputstring);
}