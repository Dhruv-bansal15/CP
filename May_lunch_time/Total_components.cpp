#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define mod 1000000007

int Prime_finder(int n)
{
    if(n==1){
        return 0;
    }
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int count=0;
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            count++;
    return count;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<"1"<<endl;
            continue;
        }
        int mid= n/2;
        int first_half_prime_count= Prime_finder(mid);
        int complete_prime_count= Prime_finder(n);
        if(complete_prime_count==n-1){
            cout<<complete_prime_count<<endl;
            continue;
        }
        cout<< complete_prime_count - first_half_prime_count + 1<<endl;

    }
    return 0;
}