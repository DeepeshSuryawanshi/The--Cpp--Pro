#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i =1; i <= n; i++){ //first iteration print first line.
        
        for (int j = 1; j <= n; j++)// innert iteration print the cout 1234
        {cout<<j << " ";}
        
        cout<<endl;
    }
   return 0;
}
