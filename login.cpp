#include"header.h"
#include<string>
map<string,int> login::vemail = map<string,int> ();
map<pair<string,string>,int> login::r = map<pair<string,string>,int> ();
login::login()
{
    name="";
    password="";
    email="";
}
void login::setname(string n)
    {
        name=n;
    }
string login::getname()const
    {
        return name;
    }
void login::setemail(string e)
    {
        email=e;
    }
string login::getemail()const
    {
        return email;
    }
void login::setpassword(string p)
    {
        password=p;
    }
string login::getpassword()const
    {
        return password;
    }
bool login::v(string s,string p)
    {
        if(r[{s,p}])
            {
                cout<<"Hello ,"<<s<<endl;
                return true;
            }
            else
            {
                cout<<"Please go to Register"<<endl;
                return false;
            }
    }
istream &operator>>( istream &input, login &login)
{
    cout<<"Enter the require information for register"<<endl;
    cout<<"Name :"<<endl;input>>login.name;
    cout<<"Email :"<<endl;input>>login.email;
    login.vemail[login.email]++;
    while(login.vemail[login.email]>1)
    {
        login.vemail[login.email]--;
        cout<<"This email has been registered, Please enter anther one"<<endl;
        input>>login.email;
        login.vemail[login.email]++;
    }
    cout<<"Password :"<<endl;input>>login.password;
    while(login.password.size()>8||login.password.size()<8)
    {
        cout<<"Password Not Valid,Please enter password its length 8 char ."<<endl;
        input>>login.password;
    }
    login.r[{login.name,login.password}]++;
    cout<<"      Hello ,"<<login.name <<endl;
    cout<<"You have registered Successfully"<<endl;
    return input;
}
ostream &operator<<(ostream &output, const login &login)
{
    output<<"*********** Your information *************"<<endl;
    output<<"Name : "<<login.name<<endl;
    output<<"Email : "<<login.email<<endl;
}
