#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //Vector
    vector<int>v{5,12,17,46,234,876,46,234,876,12,17,46};
    vector<int> ::iterator it;
    sort(v.begin(),v.end());
    it=unique(v.begin(),v.end());
    auto ip=it;
    for(it=v.begin();it!=ip;it++){
        cout << *it << " ";
    } 
    cout << endl;
    //Set
    set<int>a;
    set<int>::iterator iz;
    a.insert(5);
    a.insert(12);
    a.insert(17);
    a.insert(46);
    a.insert(234);
    a.insert(876);
    a.insert(46);
    a.insert(234);
    a.insert(876);
    a.insert(12);
    a.insert(17);
    a.insert(46);
    for(iz=a.begin();iz!=a.end();iz++){
        cout << *iz << " ";
    }
    cout << endl;
    //Array
    int arr[]={5,12,17,46,234,876,46,234,876,12,17,46};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    vector<int>s;
    int count=0;
    for(int i=0;i+1<n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
            s.push_back(arr[i]);
        }
    }
    s.push_back(arr[n-1]);
    count++;
    cout << count << endl;
    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    cout << endl;
    int m=count;
    for(int i=0;i<m;i++){
        count=0;
        for(int j=0;arr[j]<=s[i];j++){
            if(s[i]==arr[j]){
                count++;
            }
        }
        cout << s[i] << " - " << count << endl;
    }
    cout << endl;
    //Without sorting
    vector<int>w{5,12,17,46,234,876,46,234,876,12,17,46};
    n=w.size();
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        count=1;
        if(visited[i]==true){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(w[j]==w[i]){
                visited[j]=true;
                count++;
            }
        }
        cout << w[i] << "- " << count << endl;
    }
    cout << endl;   
    //map
    map<int,int>mp;
    map<int,int>::iterator ix;
    int ar[]={5,12,17,46,234,876,46,234,876,12,17,46};
    n=sizeof(ar)/sizeof(int);
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(ix=mp.begin();ix!=mp.end();ix++){
        cout << ix->first << " - " << ix->second << endl;
    }

    //Time complexity (nlogn). Finding max occurred element
    vector<int>u{5,12,17,46,234,876,46,234,876,12,17,46};
    sort(u.begin(),u.end());
    int h=1;
    int mx=0;
    for(int i=0;i+1<u.size();i++){
        if(u[i]==u[i+1]){
            h++;
        }
        else{ 
            mx=max(mx,h);
            h=1;
        }
    }
    cout << "Frequency of Max occurred element is: "<< mx << endl;
}