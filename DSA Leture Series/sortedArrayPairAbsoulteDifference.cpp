//a sorted array is given we need to find a pair absoulte difference existence for integer x
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={-1,0,1,2,3};
    int x=2;
    int i=0,j=1;
    bool found=false;
    int diff;
    while(i<n && j<n){  
        if(i==j){
            j++;
        }
        diff=arr[j]-arr[i];//absolute diff of i-j = j-i      
        if(diff<x){
            j++;
        }
        else if(diff>x){
            i++;//we cnt move j as if we move j then it goes to start so better approach would be to increase i as even eith further i-j will be decreasging the difference that is what makes this difference from pair sum
        }
        else{
            found=true;
            break;  
        }
    }
    cout<<found;
}