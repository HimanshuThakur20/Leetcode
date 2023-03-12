#include <iostream>

using namespace std;

int arrsum(int arr[],int size){

    int sum = 0;

    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }

    return sum;
}

int main(){
    int arr[10];
    cout<<"enter the array elements:"<<endl;

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"Sum of the array elements is: "<<arrsum(arr,10);


return 0;
}