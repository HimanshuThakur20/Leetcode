#include<iostream>

using namespace std;

void alternateswap(int arr[],int size){

    int first,second;

    for(int i=0;i<size;i+=2){

        // int temp=0;
        first=i;
        second=i+1;

        // cout<<"first "<<first<<endl;
        // cout<<"second "<<second<<endl;
        if(first==size-1){
            return;
        }       

        //swap

        // cout<<"first1 "<<arr[first]<<endl;
        // cout<<"second1 "<<arr[second]<<endl;

        // temp=arr[first];
        // arr[first]=arr[second];
        // arr[second]=temp;

        // cout<<"first2 "<<arr[first]<<endl;
        // cout<<"second2 "<<arr[second]<<endl;

        swap(arr[first],arr[second]);
        

    }

    //  for(int i=0;i<5;i++){

    //     cout<<arr[i]<<" ";
    // }

    return;
}

int main(){

    int arr[6];

    cout<<"Enter the array elements\n";

    for(int i=0;i<6;i++){

        cin>>arr[i];
    }

    alternateswap(arr,6);

    cout<<"Alternate swaped array:\n";

    for(int i=0;i<6;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}