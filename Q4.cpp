#include<iostream>
using namespace std;

void add(int b1[3][3], int b2[3][3]){
    int result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        result[i][j]=b1[i][j]+b2[i][j];
        }
    }
    cout<<"sum of martrix: "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<result[i][j];
        }
        cout<<endl;
    }
}
void multiply(int a1[3][3], int a2[3][3]){
    int result[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum+=a1[i][k]*a2[k][j];
            }
            result[i][j]=sum;
        }
    }
        cout<<"Product of martrices: "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<result[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int mat1[3][3];
    int mat2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter Element["<<i+1<<"]["<<j+1<<"]"<<"of matrix 1: ";
            cin>>mat1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<"Enter Element["<<i+1<<"]["<<j+1<<"]"<<"of matrix 2: ";            cin>>mat2[i][j];
        }
    }
    cout<<"\n";
    add(mat1, mat2);
    cout<<endl;
    multiply(mat1, mat2);
}