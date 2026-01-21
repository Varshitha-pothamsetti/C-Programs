#include <stdio.h>

#define MAX_INPUT 10000

int main() {
    int t;
    scanf("%d", &t);
    
    // Define valid numbers of the form 10^x where x >= 2 and <= 10000
    int valid_numbers[] = {100, 1000, 10000};
    int num_valid = 3;
    
    // Create an array to check validity quickly
    int is_valid[MAX_INPUT + 1] = {0}; // Initialize all to 0
    
    for (int i = 0; i < num_valid; i++) {
        is_valid[valid_numbers[i]] = 1;
    }
    
    // Read each integer and check if it is a valid number
    for (int i = 0; i < t; i++) {
        int a;
        scanf("%d", &a);
        
        if (a <= MAX_INPUT && is_valid[a]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

