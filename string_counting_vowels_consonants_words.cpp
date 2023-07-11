#include<iostream>
using namespace std;

int main()
{
    int i, Vcount = 0, Wcount = 0, Ccount = 0;
    string str = "This is a program to  find the  number of vowels, consonants, and words";

    for( i = 0; str[i] != '\0'; i++)    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
            Vcount++;
        else if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            Ccount++;
        else if (str[i] == ' ' && str[i-1] != ' ') // i-1 just to make sure that mistakenly putted spaces are not getting counted as words
            Wcount++;

    }

    cout<<"Number of Vowels: "<<Vcount<<endl;
    cout<<"Number of Consonants: "<<Ccount<<endl;
    cout<<"Number of Words: "<<Wcount + 1<<endl; // add extra 1, else initialize the wCount with 1

    return 0;
}
