#include<bits/stdc++.h>
using namespace std;

// a*b = GCD * LCM

int gcd(int a, int b) {
    if(b==0)
        return a;
    gcd(b, a%b);
}

int LCM(int a, int b) {
    int hcf=gcd(a, b);
    return((a*b)/hcf);
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<LCM(a, b);
    return 0;
}