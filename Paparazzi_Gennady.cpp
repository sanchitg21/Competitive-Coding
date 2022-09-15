#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    long long int t,i,n,k,j;
    cin >> t;
    while(t--){ 
        cin >> n;
        int arr[n];
        vector <int> hull;
    
        int max=0;
        for(i=0;i<n;i++){ 
            if(max<=arr[i]){ 
                max=arr[i];
            }
        }
        int p;
        vector <int> v;
        vector <int> index;
        for(i=0;i<n;i++){ 
            if(arr[i]==max){ 
                p=i;
                break; // Found max number to be a part of hull
            }
        }
        //FOR NUMBERS LESS THAN P
        for(i=0;i<p;i++){ 
            for(j=i+1;j<=p;j++){ 
                v.push_back((arr[j]-arr[i])/(j-i)); //slopes stored in vector
                index.push_back(j); 
            }
            //find max m in v. Find at what index it is present and use same index in index vector to get j
            max=0;
            for (int j = 0; j <v.size(); j++){ 
                if(v[j]>=max){ 
                    max=v[j];
                }
            } 
            int y;
            for (int j = v.size()-1; j>=0; j--){
                if(max==v[j]){ 
                    y=j;
                    break;
                }
            }

            hull.push_back(index[y]);  //put index 
            y=index[y];
        }
        v.clear();
        index.clear();
        // FOR NUMBERS GREATER THAN P
        for(i=p;i<n-1;i++){ 
            for(j=i+1;j<n;j++){ 
                v.push_back((arr[j]-arr[i])/(j-i)); //slopes stored in vector
                index.push_back(j); 
            }
            int min=0;
            for (int j = 0; j< v.size(); j++){ 
                if(v[j]<=min){ 
                    min=v[j];
                }
            } 
            int y=0;
            for (int j = v.size()-1; j>=0; j--){
                if(min==v[j]){ 
                    y=j;
                    break;
                }
            }
            hull.push_back(index[y]);  //put index 
            y=index[y];
        }
        for (int i=0;i<hull.size();i++){
            cout << v[i] << " ";
        }
        cout << "" << endl;
    }              
}
        