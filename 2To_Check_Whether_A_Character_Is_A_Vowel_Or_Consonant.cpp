#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout<<"Enter any Character"<<endl;
    char ch;
    cin>>ch;
    ch = tolower(ch);
    if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') cout<<"consonent";
    else cout<< "vowel";    
    
}