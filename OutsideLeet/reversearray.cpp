#include<iostream>

using namespace std;


void reverse(int arr[], int size){
    
    int temp=0;
       
    // for(int i=0;i<(size/2);i++){
    //     temp = arr[i];
    //     cout<<"temp "<<temp<<endl;
    //     arr[i]=arr[size-i];
    //     arr[size-i]=temp;
    // }

    for(int start=0,end=size-1;start<=end;start++,end--){

        // swap(arr[start],arr[end])
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;


    }
    return;
}

int main(){
    int Rupert[5];

    cout<<"enter the array elements:"<<endl;

    for(int i=0;i<5;i++){
        cin>>Rupert[i];
    }
    cout<<"reversed array:\n";
    reverse(Rupert,5);

    for(int i=0;i<5;i++){
        cout<<Rupert[i]<<" ";
    }
    cout<<endl;
    return 0;
}