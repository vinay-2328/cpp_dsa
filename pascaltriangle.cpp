#include<iostream>
#include<vector>
using namespace std;

 vector<vector<int>> generate(int numRows) {

    vector<vector<int>>ans;

    for(int i=0;i<numRows;i++){
        vector<int>rows(i+1,1);

        for(int j=1;j<i;j++){
            rows[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(rows);
    }
    return ans;
}

int main(){
    int numRows = 5;

    vector<vector<int>> result = generate(numRows);

    
    for(int i=0;i<numRows;i++){
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<result[i][j]<<" ";
        }
    }
}