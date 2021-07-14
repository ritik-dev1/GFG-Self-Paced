#include<bits/stdc++.h>
using namespace std;

// To count trailing zeros, find number of 2's and 5's in prime factorisation of the number.
// 2*5 makes a trailing zero.
// and in factorials, number of 2's are greater than number of 5's. So, we just need to count number of 5's.
// To find it, Trailing zero count = floor(n/5) + floor(n/25) + ...

int countTrailingZeros(long n) {
    int result=0;
    for(long i=5; i<=n; i*=5)
        result = result + n/i;
    return result;
}

int main() {
    long n;
    cin>>n;
    cout<<countTrailingZeros(n);
    return 0;
}
