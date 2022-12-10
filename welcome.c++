#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

double square(double x){
    
    return x*x;
}
void print_square(double x){
    cin>>x;
    cout << "Square " << x << " raven " << square(x) << "\n";
}

int main(){
    print_square(5.87);
}
bool accept(){
    cout << "Are we stil working(y or n)? \n";

    char answer = 0;
    cin >> answer;
    if (answer == 'y')
        return 0;
    return false;
}


