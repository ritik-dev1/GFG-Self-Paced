#include<bits/stdc++.h>
using namespace std;

// Iterative Method
int countDigitIte(long n) {
    int count=0;
    while(n!=0) {
        n = n/10;
        ++count;
    }
    return count;
}

// Logarithmic Solution
int countDigitLog(long n) {
    return floor(log10(n) + 1);
}

// Recursion
int countDigitRec(long n) {
    if(n==0)
        return 0;
    return (1 + countDigitRec(n/10));
}

int main() {
    long number;
    cin>>number;
    cout<<countDigitIte(number);
    cout<<endl;
    cout<<countDigitRec(number);
    cout<<endl;
    cout<<countDigitLog(number);
    return 0;
}