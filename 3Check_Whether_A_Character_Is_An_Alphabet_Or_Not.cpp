#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout<<"Enter any Character"<<endl;
    char ch;
    cin>>ch;
    ch = tolower(ch);
    if(ch>=97 && ch<=122) cout<<"Alphabet";
    else cout<<"Not an Alphabet";


    // cout<<(int)'a'; // 97
    // cout<<(int)'z'; // 122
    
    
    
}