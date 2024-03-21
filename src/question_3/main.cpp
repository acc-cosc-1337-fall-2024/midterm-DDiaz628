#include "question3.h"


int main()
{
    int dec;
    string binary_val;
    int option;

    do
    {
        cout<<"Enter an int value from 1 to 255:\n";
        cin>>dec;

        while (dec < 1 || dec > 255)
        {
            cout<<"\nInvalid value\n";
            cout<<"\nEnter an int value from 1 to 255:\n";
            cin>>dec;
        }

        if (dec >= 1 && dec <= 512)
        {

        binary_val = decimal_to_binary(dec);

        cout<<"\nBinary value: "<<binary_val<<"\n";
        }

        

        cout<<"\nWould you like to enter another value?\n1-Yes\n2-No\n";
        cin>>option;

        while (option != 1 && option != 2)
        {
            cout<<"\nInvalid option\n";
            cout<<"\nWould you like to enter another value?\n1-Yes\n2-No\n";
            cin>>option;
        }
        
        if(option == 1)
        {
            cout<<"\n";
        }

        else if (option == 2)
        {
            cout<<"\nHave a nice day!\n";
        } 
    } while (option != 2);
    


    return 0;
}