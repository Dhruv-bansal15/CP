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
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    string map_of_characters;
    int arr[305];
    string s;
    cin>>s;
    for(char i='0';i<='9';i++){
        map_of_characters.pb(i);
    }
    for(char i='A';i<='Z';i++){
        map_of_characters.pb(i);
    }
    for(char i='a';i<='z';i++){
        map_of_characters.pb(i);
    }
    int result=1;
    map_of_characters.pb('-');
    map_of_characters.pb('_');
    for(int i=0;i<=63;i++){
        arr[map_of_characters[i]]=i;
    }
    for(int i=0;i<s.size();i++){
        int x= arr[s[i]];
        for(int j=0;j<6;j++){
            if((x&(1<<j))==0) result = (result*3)%mod;
        }

    }
    cout<<result<<endl;
    return 0;
}