/*                                   Euclidean Algorithm
    Let 'b' be smaller thn an 'a', then
        gcd(a, b) = gcd(a-b, b)
    
    Why?
        Let 'g' be the gcd of 'a' and 'b'
        then, a=gx, b=gy and GCD(x, y)=1
        a-b = g(x-y)
*/

#include<bits/stdc++.h>
using namespace std;

// Normal implementation of Euclidean Algorithm
int gcd(int a, int b) {
    while(a!=b) {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

// Optimized implementation of Euclidean Algorithm
int gcd_optimized(int a, int b) {
    if(b==0)
        return a;
    return gcd_optimized(b, a%b);
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    cout<<gcd_optimized(a, b);
    return 0;
}