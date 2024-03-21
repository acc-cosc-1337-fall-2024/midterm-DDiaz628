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
    
    return points;
}
    


bool test_config()
{
    return true;
}