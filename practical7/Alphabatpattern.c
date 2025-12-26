#include <stdio.h>
int main() {
    //Name-AAYUSH ERPID -10026
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
//Output
// Enter n:5
// A
// AB
// ABC
// ABCD
// ABCDE

