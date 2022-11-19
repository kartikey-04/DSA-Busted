#include<iostream>
#include<queue>
using namespace std;

class Solution{
    public:
    int kthSmallest(int arr[], int size, int k){
        priority_queue<int> max_heap;

        for(int i=0; i<k; i++){
            max_heap.push(arr[i]);
        }

        for(int i=k; i<size; i++){
            if(arr[i]<max_heap.top()){
                max_heap.pop();
                max_heap.push(arr[i]);
            }
        }
        return max_heap.top();
    }
};



int main(){
    int arr[]={7,10,4,3,20,15};
    int size=6;
    int k=3;

    Solution ob;
    cout<<ob.kthSmallest(arr,size,k)<<endl;
    return 0;
}