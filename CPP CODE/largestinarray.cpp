//  Link : - https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int m=0;
        for(int i=0;i<arr.size();i++){
            m=max(arr[i],m);
        }
        return m;
    }
};
