#include <iostream>
using namespace std;

int main()
{
    char choice = 'y';
     while(choice == 'y')
    {
        cout<<"===============Menu================= \n";
        cout<<"1.Add \n"<<"2.Sub \n"<<"3.Mul \n"<<"4.Div \n";

        int option;
        cout<<"Enter your choice :";
        cin>>option;

        float a,b,c;
        cout<<"Enter 2 Number :";
        cin>> a>>b;

        switch (option)
        {
            case 1: c=a+b;
            break;
            case 2: c=a-b;
            break;
            case 3: c=a*b;
            break;
            case 4: c=a/b;
            break;
            default: cout<<"Please input the valid Operation \n";
            break;		
        }
        cout<<"Result is :"<<c<<endl;
            cout<<"Do you want to continue? y/n"<<endl;
            cin>>choice;
            if(choice == 'n')
            {
                break;
            }     
	}	
    return 0;   
}