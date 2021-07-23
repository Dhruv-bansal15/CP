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
    
int32_t main(){
    map<pii,int> arr;
    unordered_map<int,int> arr2;
    unordered_map<int,int> arr3;
    int answer=0;
    tester{
        int a,b;cin>>a>>b;
        answer-= arr[{a,b}]; // pairs that repeat and added to answers twice must be excluded
        // cout<<arr2[1]<<endl;
        answer+= arr2[a]; answer+= arr3[b];
        arr2[a]++;
        arr3[b]++;
        arr[{a,b}]++;
         

    }
    cout<<answer;
    return 0;
}