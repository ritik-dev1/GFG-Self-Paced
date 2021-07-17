#include<bits/stdc++.h>
using namespace std;

// Iterative is better, since recursive takes more auxiliary space, and more overhead!
long long fac_iterative(long n) {
    long long factorial=1;
    for(long i=2; i<=n; i++) 
        factorial *= i;
    return factorial;
}

long long fac_recursive(long n) {
    if(n==0)
        return 1;
    return n*fac_recursive(n-1);
}

int main() {
    long n;
    cin>>n;
    if(n<0)
        cout<<"Please enter a positive number";
    cout<<fac_iterative(n)<<endl;
    cout<<fac_recursive(n)<<endl;
    return 0;
}