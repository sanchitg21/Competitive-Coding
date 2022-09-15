#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int *pointer(int arr1[],int arr2[],int m ,int n){
    static int c[20];
    int i=0;
    int j=0;
    
    int y=0;
    while(i<m && j<n){ 
        if(arr1[i]>=arr2[j]){ 
            c[y]=arr2[j];
            y++;
            j++;
        }
        else if(arr1[i]<arr2[j]){ 
            c[y]=arr1[i];
            y++;
            i++;
        }
    }
    if(j==n){ 
        while(i<=m){ 
            if(arr1[i]<=arr2[n]){ 
                c[y]=arr1[i];
                y++;
                i++;
            }
            else if(arr1[i]>arr2[n]){ 
                c[y]=arr2[n];
                y++;
                break;
            }
        }
        for(i;i<=m;i++)
            c[y]=arr1[i];
            y++;
    }
    if(i==m){ 
        while(j<=n){ 
            if(arr1[m]>=arr2[j]){ 
                c[y]=arr2[j];
                y++;
                j++;
            }
            else if(arr1[m]<arr2[j]){ 
                c[y]=arr1[m];
                y++;
            }
        }
    }
    return c;
} 
int main(){
    int i;
    int arr1[11]={1,3,5,7,9,11,13,15,17,19,21};
    int arr2[10]={0,2,4,6,8,10,12,14,16,18};
    int m=sizeof(arr1)/sizeof(int)-1;
    int n=sizeof(arr2)/sizeof(int)-1;
    for(i=0;i<21;i++)
        cout << *(pointer(arr1,arr2,m,n)+i) << " ";
}
