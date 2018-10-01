/**
 * Pattern Solving by Gokul
 * Question If user input is 4 output should be
 * 4 4 4 4 4 4 4
 * 4 3 3 3 3 3 4
 * 4 3 2 2 2 3 4
 * 4 3 2 1 2 3 4
 * 4 3 2 2 2 3 4
 * 4 3 3 3 3 3 4
 * 4 4 4 4 4 4 4
 */
#include <iostream>
using namespace std;
int main() {
    int x,size,**ptr,i,j,z=0,y,resize;
    cout<<"Enter the any number :"<<endl;
    cin>>x;
    y=x;
    resize=size=x+x-1;
    ptr= new int*[size];
    for(i=0;i<size;i++){
        ptr[i]=new int[size];
    }
    while(y>0) {
        for (i = z; i < resize; i++) {
            for (j = z; j < resize; j++) {
                if (i == z || j == z || i == resize - 1 || j == resize - 1) {
                    ptr[i][j] = y;
                }
            }
        }
        y--;
        resize--;
        z++;
    }
    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            cout<<ptr[i][j]<<ends<<ends;
        }
        cout<<endl;
    }
    delete []ptr;
    return 0;
}