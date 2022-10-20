#include <stdio.h>
int count,count1;
void hanoi(int n,char a, char b, char c) {
    if(n<=1) {
        printf("%d : %c -> %c\n",n,a,c);
    }
    else {
        hanoi(n-1,a,c,b);
        count1++;
        printf("%d : %c -> %c\n",n,a,c);
        hanoi(n-3,b,a,c);
    }
    count++;
}
int main() {
    int n=4;
    hanoi(n,'A','B','C');
    printf("%d %d",count,count1);
    return 0;
}