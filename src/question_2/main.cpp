#include "question2.h"


int main()
{
    int value;
    string hex_val;
    int option;

    do
    {
        cout<<"Enter int value from 1 to 512:\n";
        cin>>value;

        while (value < 1 || value > 512)
        {
            cout<<"\nInvalid option\n";
            cin>>value;
        }
        
        if (value >= 1 && value <= 512)
        {

        hex_val = decimal_to_hex(value);

        cout<<"Hex value: "<<hex_val<<"\n";
        }

        

        cout<<"\nWould you like to enter another value?\n1-Yes\n2-No\n";
        cin>>option;

        while (option != 1 && option != 2)
        {
            cout<<"\nInvalid option\n";
            cin>>option;
        }
        
        if(option == 1)
        {
            cout<<"\n";
        }

        else if (option == 2)
        {
            cout<<"\nGoodbye!\n";
        }
        
    } while (option != 2);

    return 0;
}