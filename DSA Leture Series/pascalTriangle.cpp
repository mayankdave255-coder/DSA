// every element in pascal triangle follow ncr combination principle
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<vector <int>>triangle(n);
    for(int i=0;i<n;i++){
        vector<int>row;
        int val=1;
        for(int j=0;j<=i;j++){
            row.push_back(val);
            val = val * (i - j) / (j + 1);
        }
        triangle.push_back(row);
    }
    for (auto &row : triangle) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

}