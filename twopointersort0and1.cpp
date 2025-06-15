#include<iostream> // in ques it must be given that number of 0,2 and 1 are equal in number 

#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v ){
     int n=v.size();
    for(int i=0; i<n; i++){
        cout << v[i]<< " ";
    }
}

void sort01(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0){
            i++;
        };
        if(v[j]==1){
            j--;
        }
        if(v[i]>v[j]){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;

            i++;
            j--;
            
        }

    }
    return;
}
int main(){
     vector<int> v;
     
     v.push_back(0);
      v.push_back(1);
       v.push_back(1);
        v.push_back(0);
         v.push_back(0);
          v.push_back(1);
           v.push_back(0);
            v.push_back(1);
            display(v);
            cout<< endl;

            sort01(v);
            display(v);

}