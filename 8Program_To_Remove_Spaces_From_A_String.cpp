#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str = "Gfg to the moon";
    string newstr = "";
    int i = 0;
    while (str[i] != '\0') {
        if(str[i] != ' '){
            newstr += str[i];
        }
        i++;
    }
    cout << newstr;

    
    
    
}