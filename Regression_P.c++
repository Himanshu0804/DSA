// Basic Recurssion problems 

// Q.1 Print the name N times 

#include <bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>n){ // base case
        return ;
    }
    cout<<" sonu";
    f(i+1,n);
}



int main(){
    int n;
    cin>>n;
    f(1,n);

}