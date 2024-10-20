#include <iostream>
using namespace std;

int main(){
    int n = 5;
    // cout<< "ENTER NUMBER FOR N"<< endl;
    // cin>>n;
    // while (i<n){
    //     int j=0;
    //     while(j<i+1){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    // i++;
    // cout<<endl;

    for(int i = 0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<i+1; j++){
            cout << ch ;
            ch++;
        }
        cout << endl;
    }
    return 0;
}