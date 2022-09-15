//CODE BY Sanchit Gupta
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	t=1;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
		lli count=0;
        for(i=1;i+1<n;i++){
            if(s[i-1]==s[i+1] && s[i-1]==s[i] && s[i]=='R'){
				s[i]='G';
				count++;
			}
			else if(s[i-1]==s[i+1] && s[i-1]==s[i] && s[i]=='G'){
				s[i]='B';
				count++;
			}
			else if(s[i-1]==s[i+1] && s[i-1]==s[i] && s[i]=='B'){
				s[i]='R';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='R' && s[i+1]=='G'){
				s[i]='B';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='R' && s[i+1]=='B'){
				s[i]='G';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='G' && s[i+1]=='B'){
				s[i]='R';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='G' && s[i+1]=='R'){
				s[i]='B';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='B' && s[i+1]=='R'){
				s[i]='G';
				count++;
			}
			else if(s[i-1]==s[i] && s[i]=='B' && s[i+1]=='G'){
				s[i]='R';
				count++;
			}
        }
			if(s[i]==s[i-1]){
				count++;
				if(s[i]=='R'){
					s[i]='G';
				}
				else if(s[i]=='G'){
					s[i]='B';
				}
				else if(s[i]=='B'){
					s[i]='G';
				}
			}
		cout << count << endl;
		cout << s << endl;
	}
}
