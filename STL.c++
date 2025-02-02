#include <bits/stdc++.h>

using namespace std;


/*

int main(){
    cout<<"Hello World" ;
    return 0;  
}
*/

/////////////////Pair //////////////////////

/*

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
*/


///////////////////////// VECTOR //////////////////

// basically a vector is used when the size of the data structure is not confirmed 
// it is similar 
//the array


/// how to declare the vector 
// first the vector name then the data type and then the name 

void explain_vector(){

    vector<int> v; // creates the empty container 

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);// create 5 container with the instance of 100
    vector<int> v(5);// only create 5 container with garbage value not 100
    // the size of this can also be changed by using v.push_back(1);

    vector <int> v1(5,20);// just a conatiner that is going to be copied to the another container 
    vector <int> v2(v1);

    /// now accessing the elements in the vector 

    vector <int>:: iterator it =v.begin();
    it++;
    cout<<*(it)<<" ";
    it =it+2;
    cout<<*(it)<<" ";


    vector<int>::iterator it=v.end();
    vector<int>::iterator it =v.rend();
    vector<int>::iterator it =v.rebegin();

    cout<< v[0] << " "<<v.at(0);
    cout<< v.back()<< " ";

    for(vector<int>::iterator it=  begin();it!= v.end(); it++){
        cout<<*(it)<<" ";

    }
    for( auto it =v.begin();it!=v.end(); it++){
        cout<<*(it)<<" ";
    }


}
