#include <stdio.h>

long long sum(long long n) {
    long long ketQua = 1;
    for (long long i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    long long n;

    printf("Nhap mot so nguyen: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Giai thua khong xac dinh .\n");
    } else {
        printf("Giai thua cua %lld la: %lld\n", n, sum(n));
    }

    return 0;
}

