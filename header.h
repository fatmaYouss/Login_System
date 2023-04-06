#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<iostream>
#include<map>
using namespace std;
class login
{
private:
    string name;
    string email;
    string password;

public:
    login();
    static map<string,int> vemail;
    static map<pair<string,string>,int>r;
    void setname(string);
    string getname()const;
    void setemail(string);
    string getemail()const;
    void setpassword(string);
    string getpassword()const;
    friend ostream &operator<<(ostream &, const login &);
    friend istream &operator>>( istream &, login &);
    bool v(string,string);
};
#endif // HEADER_H_INCLUDED
