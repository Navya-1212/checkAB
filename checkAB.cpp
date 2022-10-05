// Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'
// If all the rules are followed by the given string, return true otherwise return false.


#include<iostream>
using namespace std;

bool check(string s){
    if(s.length() == 0){
        return true;
    }
    if(s[0] != 'a'){
        return false;
    }

    if(s[1] != '\0' && s[2] != '\0'){
        if(s[1] == 'a' || (s[1] == 'b' && s[2] == 'b')){
            return check(s.substr(3));
        }
    }
    return check(s.substr(1));
}

int main(){
    string s;
    cin>>s;

    cout<<check(s);
}