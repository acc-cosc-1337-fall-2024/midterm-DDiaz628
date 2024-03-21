#include "question3.h"

bool test_config()
{
    return true;
}

string decimal_to_binary(int dec)
{
    string str = "";

    for (int i = 0; i < 8; i++)
    {
        int dec1 = dec % 2;
        if(dec1 == 0)
        {
            str.push_back('0');
        }
        else if (dec1 == 1)
        {
            str.push_back('1');
        }

        dec /= 2;
    }

        int i = str.size() - 1;
        string str1 = "";

        while (0 <= i)
        {
            str1.push_back(str[i]);
            i--;
        }
        
        str = str1;
        

    return str;
}