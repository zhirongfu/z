#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include "Post.hpp"
using namespace std;
Post::Post()
{

}
Post::Post(string posttitle, string postbody) 
{
    post_title = posttitle;
    post_body = postbody;
    time_stamp_ = time(0);

}
void Post::setTitle(string title)
{
    post_title = title; //sets title
}
string Post::getTitle()const
{
    return post_title; //returns title
}
void Post::setBody(string body)
{
    post_body = body; //sets body
}
string Post::getBody()const
{
    return post_body; //returns body
}
void Post::getTimeStamp() 
{

    struct tm* localTime;

    time(&time_stamp_);
    localTime = localtime(&time_stamp_);

    int Hour = localTime->tm_hour;
    int Min = localTime->tm_min;
    int Sec = localTime->tm_sec;

    std::cout << asctime(localtime(&time_stamp_)); //prints local time

}
void Post::displayPost()
{
    std::cout << post_title << " posted at "; //print title posted at 
    getTimeStamp(); //prints time
    cout << endl;
    std::cout << post_body << endl; //prints body
}
