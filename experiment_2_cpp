#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    //data members
    int rollno;
    string Name;
    int Physics;
    int Chemistry;
    int Maths;

    //number functions
    void GetInfo()
    {
        cout<<"Enter Roll No:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>Name;
        cout<<"Enter Physics Marks: ";
        cin>>Physics;
        cout<<"Enter Chemistry Marks:";
        cin>>Chemistry;
        cout<<"Enter Maths Marks:";
        cin>>Maths; 
    }

        void DisplayInfo()
        {
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<Name<<endl;
            cout<<"Physics Marks: "<<Physics<<endl;
            cout<<"Chemistry Marks: "<<Chemistry<<endl;
            cout<<"Maths Marks: "<<Maths<<endl;
        }
        void result()
        {
            int total=Physics+Chemistry+Maths;
            cout<<"Total Marks: "<<total<<endl;
            float percentage=(total/300.0)*100;
            cout<<"Percentage: "<<percentage<<"%"<<endl;
        }
    };
        
            int main()
        {
             Student S1,S2;
             cout<<"S1 Information"<<endl;
               S1.GetInfo();
               S1.DisplayInfo();
               S1.result();
              cout<<"S2 Information"<<endl;
              S2.GetInfo();
              S2.DisplayInfo();
              S2.result();
              return 0;
        }
    
