// u need to merge 2 sorted arrays into a  new one
#include <iostream>
using namespace std;
int main(){
    int m=5,n=6;
    int arr1[m]={1,4,5,6,7};
    int arr2[n]={2,6,7,8,9,11};
    int arr3[m+n];
    int i=0,j=0,k=0;
//  here is the unoptimized code that i created some of the few mistakes include
//  while(i+j<=m+n)-> this can be more optimzed by making while(i<m&&j<n) this will break the loop when 1 is exhausted resulting
//  in the breakage of loop with the help of this the inner exhaustive loops and condition can be moved after the loop reducing the  time complexity
    while(i+j<=m+n){
        if(i==m||j==n){//exhasutive loops and conditions
            while(j<n){
                arr3[k]=arr2[j];
                j++;k++;
            }
            while(i<m){
                arr3[k]=arr1[i];
                i++;k++;
            }
            break;
        }
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i];
            i++;k++;
        }
        if(arr2[j]<=arr1[i]){
            arr3[k]=arr2[j];
            j++;k++;
        }
    }
    for(int i: arr3){
        cout<<i<<endl;
    }
}