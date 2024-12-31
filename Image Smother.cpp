#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int sum = 0;
                int c = 0;
                if(i-1 >= 0 && j-1 >= 0){ 
                    sum += img[i-1][j-1];
                    c++;
                }
                if(i-1 >=0){
                    sum += img[i-1][j];
                    c++;
                }
                if(i-1 >= 0 && j+1 < m){
                    sum += img[i-1][j+1];
                    c++;
                }
                if(j-1 >= 0){
                    sum += img[i][j-1];
                    c++;
                }
                sum += img[i][j];
                c++;
                if(j+1 < m){
                    sum += img[i][j+1];
                    c++;
                }
                if(i+1 < n && j-1 >= 0){
                    sum += img[i+1][j-1];
                    c++;
                }
                if(i+1 < n) {sum += img[i+1][j];c++;}
                if(i+1 < n && j+1 < m) {
                    sum += img[i+1][j+1];
                    c++;
                }
                // cout<<i<<" "<<j<<" -> "<<sum<<" "<<c<<endl;
                int avg = sum/c;
                ans[i][j] = avg;
            }
        }
        return ans;
    }
};