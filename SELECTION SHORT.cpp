
#include<iostream>

using namespace std;

int main(){
    int a,b,temp,arr[100];

    cout<<endl<<endl;
    cout<<"masukkan jumlah angka ";
    cin>>b;
    for(int j=0;j<b;j++){
            cout<<"masukan angka ke- " <<j+1<<" : ";
            cin >> arr[j];
        }

    for(int i=0;i<b;i++){
        for(int j=0;j<b-1;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(a=0;a<b;a++){
        cout<<endl;
        cout<<arr[a];
    }
}
