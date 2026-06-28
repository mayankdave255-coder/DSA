//a sorted array is given we need to find a pair sum existence for integer x
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={-1,0,1,2,3};
    int x=2;
    int i=0,k=n-1;
    bool found=false;
    while(i<k){
        if(arr[i]+arr[k]<x){
            i++;
        }
        else if(arr[i]+arr[k]>x){
            k--;
        }
        else{
            found=true;
            break;
        }
    }
    cout<<found;
}