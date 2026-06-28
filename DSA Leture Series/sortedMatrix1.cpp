#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    int count = 0;
    int ansrow=-1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(matrix[i][j]==1){
                int ones=cols-j;
            if(ones>count){
                count=ones;
                ansrow=i;
            }
            break;
            }
        }
    }
   cout<<ansrow<<endl<<count;
    return 0;
}