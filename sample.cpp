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
vector<int> prime_factors(int n) {
   unordered_set<int> s;
   vector<int> res;
    while (n % 2 == 0) {
        n /= 2;
    s.insert(2);
    }

    // Divide by odd numbers starting from 3
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            n /= i;
        s.insert(i);
        }
    }

    // If n is a prime greater than 2
    if (n > 2) {
    s.insert(n);
    }
    for(auto z: s)res.push_back(z);

    return res;
}

int main(){
int n; cin>>n;
cout<<"congratulations You have made Your first sample repository"<<endl;
return 0;
}