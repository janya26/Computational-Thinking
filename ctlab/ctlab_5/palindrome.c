#include <stdio.h>

int main() {
    int n, original, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; 
    while (n > 0) {
        remainder = n % 10; 
        reversed = reversed * 10 + remainder; 
        n /= 10; 
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

