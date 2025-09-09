#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num = 4000;
    if((num%4==0 && num%100!=0) || (num%400==0)){
        cout << "Leap Year";
    }
    else{
        cout << "Not a Leap Year";
    }
    
    
    
}