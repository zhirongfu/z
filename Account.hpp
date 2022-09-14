#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<vector>
class Account
{
private: //private members
	std::string username;
	std::string password;
	std::vector<Post> Post_obj;
public: //public memebers
	Account();
	Account(std::string username, std::string password);
	void setUsername(const std::string); //setter
	std::string getUsername()const; //getter
	void setPassword(const std::string password); //setter
	std::string getPassword()const; //getter
	bool addPost(const std::string title,const std::string body); 
	void viewPosts()const;
};
#endif 
