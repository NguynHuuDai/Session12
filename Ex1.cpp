#include <stdio.h>

int sum(int a, int b){
	return a+b;
}

int main() {
    int x, y;

    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    printf("Tong cua %d và %d là: %d\n", x, y, sum(x, y));

    return 0;
}

