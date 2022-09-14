#pragma once

#ifndef POST_H
#define POST_H
class Post //post class
{
private: //private members
	std::string post_title;
	std::string post_body;
	time_t time_stamp_;
public: //public memebers
	Post();
	Post(std::string title, std::string body);
	void setTitle(const std::string title); //setter	
	std::string getTitle()const; //getter
	void setBody(const std::string body); //setter
	std::string getBody()const; //getter
	void getTimeStamp(); //getter
	void displayPost();

};
#endif 

