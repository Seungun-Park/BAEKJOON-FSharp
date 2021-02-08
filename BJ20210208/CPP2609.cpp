#include <iostream>

int GCD(int, int);

int main()
{
    int A, B;
    int gcd, lcm;

    scanf("%d %d", &A, &B);

    gcd = GCD(A, B);
    lcm = gcd * (A / gcd) * (B / gcd);

    printf("%d\n%d", gcd, lcm);

    return 0;
}

int GCD(int A, int B)
{
    if(B == 0) return A;
    return GCD(B, A % B);
}