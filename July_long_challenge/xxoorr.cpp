#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007

void decToBinary(int n, vi &store_1_bits)
{
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            // cout << "1";
            store_1_bits[i]+=1;
    }
}
int32_t main(){
    tester{
        int n,k;cin>>n>>k;
        vi arr;
        vi store_1_bits(32);
        looper(i,0,n){
            int x;cin>>x;
            decToBinary(x,store_1_bits);
        }
        int count=0;
        looper(i,0,32){
            int temp = (store_1_bits[i]/k);
            if(store_1_bits[i]%k!=0) temp++;
            count+= (temp);
        }
        cout<<count<<endl;
        // store_1_bits.clear();
    }   
    // decToBinary(16);
    return 0;
}