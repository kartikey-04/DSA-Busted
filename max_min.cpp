#include<iostream>
#include<Limits.h>

using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int getMin(int arr[], int size){

    int mini=INT_MAX;

    for(int i=0; i<size; i++){
    mini=min(mini,arr[i]);
    }

    return mini;

}

int main(){
    int arr[8]={45,67,87,54,34,12,35,90};

    cout<<"Max. Element :"<<getMax(arr,8)<<endl;
    cout<<"Min. Element :"<<getMin(arr,8)<<endl;

    return 0;
}