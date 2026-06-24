#include<iostream>
using namespace std;

int binarysearch(int arr[] , int key , int size){
    int left=0,right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)left=mid+1;
        else right=mid-1;
    }
    return -1;
}