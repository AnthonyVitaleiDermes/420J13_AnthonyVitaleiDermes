// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream> 
using namespace std;

class UsersAccount 
{
private:

	// my variables

	int ID;
	string UserName;
	string Password;

public:

	//Constructor
	UsersAccount(int id, const string& username, const string& pwd) : ID(id), UserName(username), Password (pwd){}


};


int main()
{
	


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


