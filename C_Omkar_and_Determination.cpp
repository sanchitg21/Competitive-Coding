#include<bits/stdc++.h>
#define int long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vpi vector<pair<long,long>>
#define forn(i,n) for(int i=0;i<n;i++)
#define rforn(i,n) for(int i=n-1;i>=0;i--)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define sa(v) sort(v.begin(), v.end())
#define sd(v) sort(v.begin(),v.end(), greater<int>())
#define sc(v) sort(v.begin(), v.end(), compare)
#define ff first
#define ss second
#define cl(a,b) (a+b-1)/b
#define md(a,b) (a%b<0)?b-a%b:a%b;
#define endl "\n"

using namespace std;

bool compare(pair<int,int> a, pair<int ,int> b){
    if(a.ff!=b.ff)
        return a.ff>b.ff;
    return a.ss>b.ss;
}


int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    forn(i,n) cin>>s[i];

    set<int> st;
    rep(i,1,n){
        rep(j,1,m){
            if(s[i-1][j] == 'X' && s[i][j-1] == 'X') st.insert(j);
        }
    }

    

    int q; cin>>q;
    while(q--){
        int x1,x2; 
        cin>>x1>>x2;
        auto p = st.lower_bound(x1);
        if(p != st.end() && *p < x2) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
} 