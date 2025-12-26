#include <stdio.h>
int main() {
    //Name-AAYUSH ERPID-10026
    int n, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}
//Output
//Enter limit:60
// Sum of even numbers = 930