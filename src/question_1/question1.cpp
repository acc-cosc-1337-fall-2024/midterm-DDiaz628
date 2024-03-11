#include "question1.h"

int get_earned_points(int sold)
{
    int points = sold;
    

    if(points >= 1 && points <= 5)
    {
        points *= 1;
    }
    
    else if(points >= 6 && points <= 10)
    {
        points *= 5;
    }
    
    else if(points >= 11 && points <= 15)
    {
        points *= 10;
    }
    
    else if(points >= 16)
    {
        points *= 15;
    }

    else
    {
        cout<<"Invalid option\n";
    }
    
    /*switch(points)
    {
        case 1 ... 5:
            cout<<points<<"\n";
            break;
        case 6 ... 10:
            points *= 5;
            cout<<points<<"\n";
            break;
        case 11 ... 15:
            points *= 10;
            cout<<points<<"\n";
            break;
        case 16 ... 10:
            points *= 5;
            cout<<points<<"\n";
            break;

        
    }*/
    return points;
}
    


bool test_config()
{
    return true;
}