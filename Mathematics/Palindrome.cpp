#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long n) {
    
    long rev=0, temp=n;
    while(temp>0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    return(rev==n);
}

int main() {
    long n;
    cin>>n;
    if(isPalindrome(n))
        cout<<n<<" is a Palindrome!";
    else
        cout<<n<<" is a not Palindrome!";
    return 0;
}