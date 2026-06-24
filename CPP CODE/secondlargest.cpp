// LINK :- https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int slar=-1,lar=-1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>lar){
                slar=lar;
                lar=arr[i];
            }
            else if(arr[i]>slar && arr[i]<lar)slar=arr[i];
        }
        return slar;
    }
};