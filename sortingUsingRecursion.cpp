#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
    if(n == 1){
        return;
    }

    sortArray(arr, n - 1);
    int i = n - 1;
    while(arr[i] < arr[i - 1] && i != 0){
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
        i = i - 1;
    }
    return;
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return;
}

int main(){
    int arr[] = {2, 1, 3, 5, 4};
    int n = 5;
   
    sortArray(arr, n);
    printArray(arr, n);
    return 0;
}