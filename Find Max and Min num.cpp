#include <iostream>

using namespace std;

int main(){
    double temp=0;
    double element[2]={};
    for (int i=1;i<=5;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>temp;
        if (i==1){
            element[0]=temp;
            element[1]=temp;
        }
        if (temp>element[0]){
            element[0]=temp;

        }
        if (temp<element[1]){
            element[1]=temp;

        }
    }
    
    cout<<"\nMaximum number: "<<element[0];
    cout<<"\nMinimum number: "<<element[1];
    return 0;
}
