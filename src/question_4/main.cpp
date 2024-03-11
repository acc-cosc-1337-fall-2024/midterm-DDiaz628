#include "question4.h"


int main()
{
    int celsius;
    double c_to_f;
    int option;

     do
    {
        cout<<"Enter the tempurature in celsius:\n";
        cin>>celsius;

        c_to_f = get_fahrenheit(celsius);

        cout<<celsius<<" celsius is equal to "<< c_to_f<<" fahrenheit\n";

        
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