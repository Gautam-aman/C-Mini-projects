#include<iostream>

using namespace std;

class calculator{
    private:
    int size;
    int crr;
   
    public:
    calculator(){
        cout<<"Enter No of subjects :: "<<endl;
        cin>>size;
        cout<<"Enter total marks in one subject"<<endl;
        cin>>crr;
    }
    
    
    void setmarks(){
        int arr[size];
        int total=0;
        for (int i = 0; i < size; i++)
        {
            cout<<"Enter your marks in subject "<<i+1<<endl;
            cin>>arr[i];
        }
        
        for (int i = 0; i < size; i++)
        {
            total += arr[i];
        }
        int subtotal= size*crr;

        cout<<" You got " << total << " marks out of "<< subtotal <<endl;
        float x;
        float y;
        x=total;
        y=subtotal;
        float a= (x/y)*100.00;
        float c = a/9.5;
        cout<<" Your CGPA is "<< c <<endl;

        }
        };




int main(){
    calculator cgpa;
    cgpa.setmarks();
    return 0;
}