#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include "Post.hpp"
#include "Account.hpp"
using namespace std;
Account::Account()
{
    username = " ";
    password = " ";
}
Account::Account(string tmpusername, string tmppassword)
{
    username = tmpusername;
    password = tmppassword;
}
void Account::setUsername(string tmpusername)
{
    username = tmpusername; //sets username
}
string Account::getUsername()const
{
    return username; //returns username
}
void Account::setPassword(string tmppassword)
{
    password = tmppassword; //sets password
}
string Account::getPassword()const
{
    return password; //returns password
}
bool Account::addPost(string title, string body)
{
    Post obj;
    if (title.size() != 0 && body.size() !=0)
    {
        obj.setTitle(title);
        obj.setBody(body);
    }
    Post_obj.push_back(obj);
    return true;
     
}
void display(Post obj)
{
    cout << obj.getTitle() << " posted at "; //prints title posted at
    obj.getTimeStamp(); //prints current time
    cout << endl;
    cout << obj.getBody() << endl; //prints body
}
void Account::viewPosts()const
{
    for (size_t i = 0; i < Post_obj.size(); ++i)
    {
        Post obj = Post_obj.at(i);
        display(obj);
        cout << endl;
    }

}
