#include <iostream>

using namespace std;

int main(){
    int size1,size2,size3,size4;


    cout<<"Enter the number of rows for the first matrix: ";
    cin>>size1;
    cout<<"Enter the number of columns for the first matrix: ";
    cin>>size2;
    cout<<'\n';
    cout<<"Enter the elements of the first matrix:\n";
    int matrix1[size1][size2];

    for (int row=0;row<size1;row++){
        for (int column=0;column<size2;column++){
            printf("Enter element [%d][%d]: ",row,column);
            cin>>matrix1[row][column];

        }
    }
    
    
    cout<<"\nEnter the number of rows for the second matrix: ";
    cin>>size3;
    cout<<"Enter the number of columns for the second matrix: ";
    cin>>size4;
    cout<<'\n';
    cout<<"Enter the elements of the second matrix:\n";
    int matrix2[size3][size4];
    
    for (int row=0;row<size3;row++){
        for (int column=0;column<size4;column++){
            printf("Enter element [%d][%d]: ",row,column);
            cin>>matrix2[row][column];

        }
    }
    
    //the inner loop is matrix2 no. of column and outer loop is matrix1 no. of row
    cout<<"\nResulting matrix after multiplication:\n";
    
    int matrix_cal=0;
    for (int row=0;row<size1;row++){
        for (int column=0;column<size4;column++){
            for (int cal=0;cal<size2;cal++){
                matrix_cal+=matrix1[row][cal]*matrix2[cal][column];
            }
    
        cout<<matrix_cal<<' ';
        matrix_cal=0;
        }
    cout<<'\n';  
    }
    
    return 0;   
}


            
