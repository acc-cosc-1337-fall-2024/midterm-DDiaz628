#include "question2.h"

bool test_config()
{
    return true;
}

string decimal_to_hex(int dec)
{
    string str = "";
    int mod;

    //int mod = dec % 16;

    if (dec == 0)
    {
        str.push_back('0');
    }

    while (dec != 0)
    {
        mod = dec % 16;

        switch(mod)
        {
            case 0:
                str.push_back('0');
                break;
            
            case 1:
                str.push_back('1');
                break;
        
            case 2:
                str.push_back('2');
                break;

            case 3:
                str.push_back('3');
                break;

            case 4:
                str.push_back('4');
                break;

            case 5:
                str.push_back('5');
                break;

            case 6:
                str.push_back('6');
                break;

            case 7:
                str.push_back('7');
                break;

            case 8:
                str.push_back('8');
                break;

            case 9:
                str.push_back('9');
                break;

            case 10:
                str.push_back('A');
                break;

            case 11:
                str.push_back('B');
                break;

            case 12:
                str.push_back('C');
                break;

            case 13:
                str.push_back('D');
                break;

            case 14:
                str.push_back('E');
                break;

            case 15:
                str.push_back('F');
                break;
            default:
                break;
        }

        dec = dec / 16;

        //int i = 0;
        int j = str.size() - 1;
        string str1 = "";

        while (0 <= j)
        {
            str1.push_back(str[j]);
            j--;
        }
        
        str = str1;
    }

    return str;
}