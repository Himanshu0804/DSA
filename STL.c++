#include <bits/stdc++.h>

using namespace std;


/*

int main(){
    cout<<"Hello World" ;
    return 0;  
}
*/

/////////////////Pair //////////////////////

void all_pair(){
    // this is the basic pair 
    pair <int,int> p=  {1,3};
    cout<<p.first<<" ";

    // 2. pair in pair 
    pair <int,pair<int,int>> q={5,{6,7}};
    cout<<q.second.second<<" "<<q.second.first;

    pair<int, int> arr[] = {{3,4},{5,6},{7,8}};
    cout<<arr[1].first;

}

int main(){

    all_pair();
}