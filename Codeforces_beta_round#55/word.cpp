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
    string s;cin>>s;
    int n= s.size();
    int small_c=0;
    int large_c=0;
    looper(i,0,n){
        if(isupper(s[i])) large_c++;
        else small_c++;
    }
    if(large_c>small_c){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }
    return 0;
}