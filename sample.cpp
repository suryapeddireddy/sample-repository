#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
long long Pow(long long a, long long b) {
    long long result = 1;

    // Update a to be in the range [0, m) to handle negative values of a
    a = a % mod;
    while (b > 0) {
        // If b is odd, multiply the result with a
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        // Square a and reduce it modulo m
        a = (a * a) % mod;

        // Divide b by 2
        b /= 2;
    }

    return result;
}

long long modinv(long long b, long long m) {
    return Pow(b, mod - 2);
}
int main(){
int n; cin>>n;
cout<<"congratulations You have made Your first sample repository"<<endl;
return 0;
}