#include<iostream>

using namespace std;

bool LinearSearch(int arr[], int size, int element){

    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10],key;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key to find: ";
    cin>>key;

    bool found = LinearSearch(arr,10,key);
    if(found){
        cout<<"The key is presenet\n";
    }
    else 
        cout<<"The key is absent\n";

    return 0;
}