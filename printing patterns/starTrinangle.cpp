#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < n; i++){ //first iteration print first line.
        for (int j = 0; j < i+1; j++)// innert iteration print the cout 1234
        {cout<<"* ";}
        cout<<endl;
    }
   return 0;
}

// outpu
// * 
// * *
// * * *
// * * * *