#include <iostream>
using namespace std;

int main(){

    //initalizing array
    int arr[3] = {1, 2, 3};
    cout<<arr[0]<<endl;

    int marks[5];
    for(int i = 1; i <= 5; i++){
        cout<<"Enter the marks of "<<i<<"th student: "<<endl;
        cin>>marks[i];
    }
    for(int i = 1; i <= 5; i++){
        cout<<"Marks of "<<i<<"th student is: "<<marks[i]<<endl;
    }


    return 0;
}