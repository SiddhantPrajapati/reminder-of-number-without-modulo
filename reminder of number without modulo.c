
//Reminder of the number without using modulo operation
#include <stdio.h>
int add(int n);
int main(){
    int n;
    int rem, divisor;
    int d;
    printf("Enter divident.");
    scanf("%d",&n);
    printf("Enter divisor.");
    scanf("%d",&divisor);
    d = n/divisor;
    rem = n - (d*divisor);
    printf("%d",rem);
    return 0;
}

