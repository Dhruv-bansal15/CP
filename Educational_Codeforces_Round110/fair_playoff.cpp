#include<bits/stdc++.h>
using namespace std; 
#define int long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define loop(var, initial, final) for(int var=initial; var < final; var++)
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        vi d;
        for(int i=0;i<4;i++){
            int x;
            cin>>x;
            d.pb(x);
        }
        int index1,index2 ,max_ele;
        index2=0;

        max_ele = *max_element(d.begin(),d.end());
        if(d[0]==max_ele){
            index2=1;
        }
        for(int i=0;i<4;i++){
            if(d[i]==max_ele){
                index1 = i;
            }else{
                if(d[i]>d[index2] & d[i]<max_ele){
                    index2=i;
                }
            }
        }
        if(abs(index1 - index2)>=2 | (index1==1 & index2==2) | (index1==2 & index2==1)){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}