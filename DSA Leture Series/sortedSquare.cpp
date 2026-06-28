// you need to find square in a sorted array and give sorted arrayy
//it also contain negative numbers 
// the approach is that the biggest number is either the 0 or n-1 elements
// so we compare those squares and push into a vector then reverse for sorted array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={-4,-3,-1,0,2,5};
    vector<int>sq;
    int i=0,j=5;
    while(i<=j){
        int sql=arr[i]*arr[i];
        int sqh=arr[j]*arr[j];
        if(i==j){
            sq.push_back(sql);
            i++;
        }
        else if(sql<sqh){
            sq.push_back(sqh);
            j--;
        }
        else{
            sq.push_back(sql);
            i++;
        }
    }
    reverse(sq.begin(), sq.end());
    for(int i:sq){
        cout<<i<<endl;
    }


}