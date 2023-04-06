#include"header.h"
int main()
{
    bool v(string,string);
    cout<<"How many user need to using system";
    int n;
    cin>>n;
    while(n)
    {
        login l1;
        cout<<"           *****Welcome , in my system*****"<<endl<<endl;
        cout<<"Select one of the following choices :"<<endl;
        cout<<"1- Sine Up"<<endl;
        cout<<"2- Register"<<endl<<endl;;
        int x;
        cin>>x;
        if(x==1)
        {
            string s,p;
            cout<<"Name :"<<endl;
            cin>>s;
            cout<<"password :"<<endl;
            cin>>p;
            while(p.size()!=8)
            {
              cout<<"password :"<<endl;
              cin>>p;
            }
            if(!l1.v(s,p))
            {
              continue;
            }
        }
        else
        {
            cin>>l1;
        }
        cout<<"If you want log out !!!"<<endl;
        cout<<"Yes / No"<<endl;
        string s;
        cin>>s;
        if(s=="Yes")
        {
            cout<<"Exit"<<endl<<endl;
            n--;
        }
        else
        {
            cout<<"We are happy for your steel "<<endl<<endl;
            n--;
        }
    }
    return 0;
}
