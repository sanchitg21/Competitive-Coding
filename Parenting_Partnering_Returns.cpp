#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,i,n,j;
    cin >> t;
    for(int k=1;k<=t;k++){ 
        cin >> n;
        int C[n][2];
        int J[n][2];
        cin >> C[0][0] >> C[0][1];
        int q,r;
        int y=1;
        int z=0;
        string s;
        s.insert(0,"C");
        for(j=1;j<n;j++){ 
            
            int flag=0;
            cin >> q >> r;
            
            for(i=0;i<y;i++){ 
                if((r<=C[i][0]) || (q>=C[i][1])){ 
                     flag=1;
                }
                else { 
                    flag=0;
                    break;
                }
            }
            if(flag==1){ 
                C[y][0]=q;
                C[y][1]=r;
                y++;
                s.insert(s.length(),"C");
                continue;
            }
            else if(z==0){ 
                J[z][0]=q;
                J[z][1]=r;
                z++;
                s.insert(s.length(),"J");
                continue;
            }

            for(i=0;i<z;i++){ 
                if((r<=J[i][0]) || (q>=J[i][1])){ 
                     flag=1;
                }
                else { 
                    flag=0;
                    break;
                }
            }
            if(flag==1){ 
                J[z][0]=q;
                J[z][1]=r;
                z++;
                s.insert(s.length(),"J");
                continue;
            }
            else { 
                s="IMPOSSIBLE";
                break;
            }
        }
        cout << "Case #" << k <<": " << s << endl;
    }
}
