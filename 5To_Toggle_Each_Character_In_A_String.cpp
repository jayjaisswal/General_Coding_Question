#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout<<"Enter any String"<<endl;
    string str;
    cin>>str;
    int i =0;
    while(str[i]!='\0'){
        if(islower(str[i])) str[i] = toupper(str[i]);
        else if(isupper(str[i])) str[i] = tolower(str[i]);
        i++;

    }
    cout<<str;
    
    
    
}