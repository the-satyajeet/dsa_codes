#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    string str = "captain";
    string str1 = "AMERICA";
    string str2 = "sTeVE ROgERs";

    // lower to upper case
    cout<<"lower to upper case:"<<endl;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    cout<<str<<endl<<endl;

    // upper to lower case

    // if you could not remember the ASCII code to find the difference, you can subtract
    // subtract any letter of upper case from the lower case of that same letter
    // that difference you can add or subtract to get the result
    int diff = 's' - 'S'; // 32
    cout<<"upper to lower case:"<<endl;
    for(i = 0; str[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += diff;
    }
    cout<<str1<<endl<<endl;

    // toggle the case of each character
    cout<<"toggle the case of each character:"<<endl;
    for(i = 0; str2[i] != '\0'; i++)    {
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;
        else if (str2[i] >= 97 && str2[i] <= 122)
            str2[i] -= 32;
    }
    cout<<str2<<endl;

    return 0;
}
