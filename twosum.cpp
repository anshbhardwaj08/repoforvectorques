#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n= v.size();
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(0);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(1);
    v.push_back(5);
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
cout<< "hello "<< endl;
 
    for(int i=0 ; i<=n-2 ; i++){
        for( int j=i+1; j<=n-1; j++){
            if(v[i]+v[j]==5){
                cout<< i<< " "<< j<< endl;
            }
        }
    }

}