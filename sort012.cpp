#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swaparr(int a , int b, vector<int> &v){
    int n= v.size();
    
        int temp=v[a];
        v[a]=v[b];
        v[b]=temp;

    return;
}

void sort012(vector<int>& v){
    int n=v.size();
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<high){
        if(v[mid]==2 ){
            swaparr(mid,high,v);
            high--;
            


        }

        if(v[mid]==0){
            swaparr(mid,low,v);
            low++;
            mid++;


        }
        else{
            mid ++;
            
        }
    }
}

void display( vector<int>& v){
    for( int i =0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);  

    display(v);
    sort012(v);
    cout<< endl;
    display(v);
    


}