 #include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d", &n);
    for (; n > 0; n /= 10) {
      count += ((n % 10) + 1) % 2;
      
    }
    printf("%d", count); 

    return 0;
}