#include "question1.h"

int main()
{
    int widget;
    int points_earned;
    int option = 0;

    //cout<<"Would you like to enter a widget amount?\nType 1 for Yes or 2 for No\n";
    //cin>>option;

    do
    {
        cout<<"Enter the amount of widgets sold:\n";
        cin>>widget;

        points_earned = get_earned_points(widget);

        cout<<"Points Earned: "<<points_earned<<"\n";

        cout<<"\nWould you like to enter another widget amount?\n1-Yes\n2-No\n";
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