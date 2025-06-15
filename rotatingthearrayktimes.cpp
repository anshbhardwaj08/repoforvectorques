#include<iostream>
#include<vector> // rotate it by two times 
#include<algorithm>
using namespace std;

void reversearr(int i, int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
i++;    
j--;
    }
    return;
}


void display(vector<int> &v ){
     int n=v.size();
    for(int i=0; i<n; i++){
        cout << v[i]<< " ";
    }
}


int main(){
    vector<int> v;
    
   
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(16);
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);
    v.push_back(18);
    v.push_back(8);
    display(v);
    cout<<endl;
    
    //reversearr(2,4,v);
    //display(v);

    int k;
    cout<< endl;
    cout<< " enter the number of times you the array to be rotated :";
    cin>>k;
   
    cout << endl ;
    int n =v.size();
    if( k>n){
        k=k%n;
    }

    reversearr(0,n-k-1,v);
    reversearr(n-k,n-1,v);
    reversearr(0,n-1,v);
    cout<< " the rotated array is:";
    cout<< endl;
    display(v);

}