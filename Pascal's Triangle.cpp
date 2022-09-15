#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,i,j;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    cout << "PASCAL'S TRIANGLE" << "\n";
    for(i=1;i<=3*(n-1);i++){
        cout << " ";
    }
    printf("%6d\n",1);
    vector<int>v={1,1};
    vector<int>s=v;
    for(j=2;j<=n;j++){ 
        for(i=1;i<=3*(n-j);i++){
            cout << " ";
        }
        for(i=0;i<s.size();i++){
            printf("%6d",s[i]);
        }
        cout << endl;
        s.clear();
        for(i=0;i+1<v.size();i++){
            s.push_back(v[i]+v[i+1]);
        }
        s.push_back(1);
        s.insert(s.begin(), 1);
        v=s;
    }
}
