#include <iostream>
using namespace std;
 
void printCollatz(int getNum)
{

    cin>>getNum;
    while (getNum != 1)
    {
        cout << getNum << " ";
 
        if (getNum % 2 == 1)
            getNum = 3 * getNum + 1;
 
        else
            getNum = getNum/2;
    }
    cout << getNum;
}
 
int main()
{
    printCollatz(1);
    return 0;
}