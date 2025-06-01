#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to perform the simple sieve of Eratosthenes up to a given limit
vector<int> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

// Function to perform the segmented sieve
vector<int> segmentedSieve(int L, int R) {
    int limit = sqrt(R) + 1;
    vector<int> primes = simpleSieve(limit);
    
    vector<bool> isPrimeRange(R - L + 1, true);
    
    for (int prime : primes) {
        int start = max(prime * prime, L + (prime - L % prime) % prime);
        for (int j = start; j <= R; j += prime) {
            isPrimeRange[j - L] = false;
        }
    }
    
    if (L == 1) {
        isPrimeRange[0] = false;  // 1 is not a prime number
    }
    
    vector<int> primeRange;
    for (int i = 0; i < R - L + 1; ++i) {
        if (isPrimeRange[i]) {
            primeRange.push_back(i + L);
        }
    }
    
    return primeRange;
}

// Main function to test the segmented sieve
int main() {
    int L = 10, R = 50;
    vector<int> primes = segmentedSieve(L, R);
    
    cout << "Primes in range [" << L << ", " << R << "]: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
