#include<iostream>
using namespace std;
int main() {
    int m,n,i,j,k,flag,c,s,l;
    cin >> n;
    cin >> m;
    int arr[m];
    int array[n];
    for(i=0;i<m;i++)
        cin >> arr[i];
    for(k=0;k<n;k++){ 
        for(i=0;i<m;i++){ 
            flag=0;
            for(j=0;j<m;j++){ 
                if (arr[i]<= arr[j])
                    flag=1;
                else { 
                    flag=0;
                    break;
                }
            }
            if (flag==1)
                break;
        }
        array[k]=arr[i]; // Putting smallest element in the new array
        m=m-1;
        for(i;i<m;i++){ 
            c=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=c;   // Deleted smallest element from the old array
        }
    }

    // New array contains the first N elements

    // Find smallest element from new array

    for(i=0;i<n;i++){ 
        flag=0;
        for(j=0;j<n;j++){ 
            if (array[i]<= array[j])
                flag=1;
            else { 
                flag=0;
                break;
            }
        }
        if (flag==1)
            break;
    }
    s= array[i];

    // Finding largest element from the new array

    for(i=0;i<n;i++){ 
        flag=0;
        for(j=0;j<n;j++){ 
            if (array[i]>= array[j])
                flag=1;
            else { 
                flag=0;
                break;
            }
        }
        if (flag==1)
            break;
    }
    l= array[i];

    cout << l-s << endl;
}
