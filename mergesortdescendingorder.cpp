#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> merge(vector<int>& v1, vector<int> &v2){
    int n=v1.size();
    int m=v2.size();
    int i=n-1;
    int j=m-1;
    vector<int>res(n+m);
    int k=n+m-1;
    while(i>-1 and j>-1){
        if(v1[i]>v2[j]){
            res[k]=v1[i];
            i--;
            k--;

        }
        else{
            res[k]=v2[j];
            j--;
            k--;

        }
        
        
        if ( i==0){

            while( j>-1){
                res[k]=v2[j];
                k--;
                j--;
            }
       
        }

        if ( j==0) {
            while(i>=-1){
                res[k]=v1[i];
                i--;
                k--;
            }
        }



    }    
    return res;
    
}




void display(vector<int>& v){
    for( int i=0 ; i< v.size(); i++){
        cout<< v[i] << " ";
    }
    return;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    

    display(v1);
    cout<< endl;


    vector<int> v2;

    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
       
display(v2);
cout<< endl;

vector<int>v=merge( v1, v2);
display(v);

 



}