#include<iostream>

using namespace std;

int getmaxvalue(int arr[], int s){
    int max= INT_MIN;

    for(int i =0; i<s; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"maximum  value of array is "<<max<<endl;
    return max;

}

int getminvalue(int arr[], int s){
    int min = INT_MAX;
    for(int i =0 ; i<s ; i++){
        if (arr[i]>min){
            min=arr[i];
        }
    }
    cout<<"Minimun value of array is "<<min<<endl;
    return min;
}

int main(){
  //array
  int n;
  cout<<"enter size of array"<<endl;
  cin>>n;
  int aman[n];
  for (int i = 0; i<n ; i++){
    cout <<"enter value " << i + 1 <<" of array"<<endl;
    cin>>aman[i];
    } 
  
  cout<<getmaxvalue(aman,n);
return 0;
}