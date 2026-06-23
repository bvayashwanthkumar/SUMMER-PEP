// Link :- https://www.geeksforgeeks.org/problems/reverse-an-array/1

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i=0,j=arr.size()-1;
        // code here
        int t=0;
        while(i<=j){
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            i++;
            j--;
        }
    }
};