
#include<bits/stdc++.h>
using namespace std;

bool anagrams(string& str1, string& str2) {
    string sorted_str1 = str1;
    string sorted_str2 = str2;
    sort(sorted_str1.begin(), sorted_str1.end());
    sort(sorted_str2.begin(), sorted_str2.end());

    if(str1.size() != str2.size())
        return false;
    else if(sorted_str1 == sorted_str2)
        return false;
    else
        return true;

}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if(anagrams(str1, str2))
        cout<<"The strings are anagrams.";
    else
        cout<<"The strings are not anagrams.";
}
