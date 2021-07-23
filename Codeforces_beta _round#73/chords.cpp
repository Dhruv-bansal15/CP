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
vector<string> arr;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        arr.pb(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
 
// Driver Code
// int main()
// {
//     string str = "ABC";
//     int n = str.size(); 7 3 
//     permute(str, 0, n-1);
//     return 0;
map<string,int> huehue;


string checker(string s){
    string a,b,c;a=s[0];b=s[1];c=s[2];
    int diff1,diff2;
    if(huehue.at(b) - huehue.at(a)>0){
        diff1 = huehue.at(b) - huehue.at(a);
    }else{
        diff1 = 12 - huehue.at(a) + huehue.at(b);
    }
    if(huehue.at(c) - huehue.at(b)>0){
        diff1 = huehue.at(c) - huehue.at(b);
    }else{
        diff1 = 12 - huehue.at(c) + huehue.at(b);
    }
    if(diff1==4 & diff2==3) {return "major";}
    else if(diff1==3 & diff2==4) {return "minor";}
    else{
        return "strange";
    }
    
}
int32_t main(){
    huehue["C"]=1;huehue["C#"]=2;huehue["D"]=3;huehue["D#"]=4;huehue["E"]=5;huehue["F"]=6;huehue["F#"]=7;huehue["G"]=8;huehue["G#"]=9;huehue["A"]=10;huehue["B"]=11;huehue["H"]=12;
    string s;
    looper(i,0,3){
        string g;cin>>g;
        s.pb(g);
    }
    permute(s,0,2);
    looper(i,0,6){
        cout<<arr[i]<<endl;
    }
    bool done=false;
    looper(i,0,6){
        string temp = arr[i];
        string result = checker(temp);
        if(result=="major" | result=="minor"){
            cout<<result;
            done=true;
            break;
        }
    }
    if(done==false){
        cout<<"strange";
    }
    return 0;
}