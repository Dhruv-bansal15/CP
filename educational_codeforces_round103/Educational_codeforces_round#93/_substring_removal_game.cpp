#include<bits/stdc++.h>
using namespace std; 
#define int_ long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007

int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int count=0;
        pqb arr;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }else{
                if(count>0) {
                    arr.push(count);
                    count=0;
                }
            }
        }
        if(count>0){
            arr.push(count);
        }
        int ans=0;
        while(arr.size()){
            ans+=arr.top();
            if(arr.size()<=2) break;
            arr.pop();
            arr.pop();
        }
        cout<<ans<<endl;

    }
}