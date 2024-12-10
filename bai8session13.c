#include <stdio.h>
int gcd(int a, int b);

int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat:\n ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai:\n ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}