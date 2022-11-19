#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int size){
    int start=0;
    int end=size-1;

    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

int main(){

    int odd[]={23,43,34,56,12};
    int even[]={45,67,89,34,56,21};

    reverse(odd,5);
    reverse(even,6);

    printArray(odd,5);
    printArray(even,6);


}