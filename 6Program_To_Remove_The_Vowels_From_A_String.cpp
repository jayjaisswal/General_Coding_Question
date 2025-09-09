#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "Enter any String" << endl;
    string str;
    cin >> str;
    string newstr = "";
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
        }
        else
        {
            newstr = newstr + str[i];
        }

        i++;
    }
    cout << newstr;
}