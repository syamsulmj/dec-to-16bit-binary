#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int dec = rand() % 65536;
    int storedDecimal = dec;
    char bin16[] = "0000 0000 0000 0000"; //4 9 14

    for(int i = 18; i >= 0; i--)
    {
        if(i != 4 && i != 9 && i != 14)
        {
            if(dec % 2)
            {
                bin16[i] = '1';
            }
            dec /= 2;
        }
    }

    cout << "Generated Decimal Number = " << storedDecimal << "\nConverted 16-bit Binary Number = " << bin16;

    return 0;
}
