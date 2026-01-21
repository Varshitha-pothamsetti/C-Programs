#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    int i = 0, j = 0, flag = 1;
    printf("Enter the brackets: ");
    scanf("%s", str);
    j = strlen(str) - 1;
    if (strlen(str) % 2 != 0) {
        flag = 0;
    } else {
        while (i < j) {
            if ((str[i] == '(' && str[j] == ')') ||
                (str[i] == '{' && str[j] == '}') ||
                (str[i] == '[' && str[j] == ']')) {
                i++;
                j--;
            } else {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1 && i >= j) { 
        printf("Valid Parentheses\n");
    } else {
        printf("Non-valid parentheses\n");
    }
}
