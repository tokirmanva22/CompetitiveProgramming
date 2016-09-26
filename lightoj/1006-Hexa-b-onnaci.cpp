#include <bits/stdc++.h>

#define lld long long int

using namespace std;

lld mem[10005];
lld a, b, c, d, e, f;
lld fn( int n ) {
    if( n == 0 )
    {
        mem[n] = a % 10000007;
        return mem[n];
    }
    if( n == 1 )
    {
        mem[n] = b % 10000007;
        return mem[n];
    }
    if( n == 2 )
    {
       mem[n] = c % 10000007;
       return mem[n];
    }
    if( n == 3 )
    {
        mem[n] = d % 10000007;
        return mem[n];
    }
    if( n == 4 )
    {
        mem[n] = e % 10000007;
        return mem[n];
    }
    if( n == 5 )
    {
        mem[n] = f % 10000007;
        return mem[n];
    }
    if(mem[n] != -1)
    {
        return mem[n];
    }
    else
    {
        mem[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ) % 10000007 ;
        return mem[n];
    }
}
int main() {
    int n, caseno = 0, cases;
    memset(mem, -1, sizeof(mem));
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
        memset(mem, -1, sizeof(mem));
    }
    return 0;
}

