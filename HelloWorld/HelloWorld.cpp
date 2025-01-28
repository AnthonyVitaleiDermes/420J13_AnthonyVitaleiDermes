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

	//Login
	bool Login(const string CreatedUserName, const string CreatedPassword) //const ???
	{
		return (CreatedUserName == UserName && CreatedPassword == Password);
	}
};


int main()
{    
	int ID;
	string UserName;
	string Password;


	cout << "Welcome to the Login Page\n ! ";    //easy display message
	cout << "Enter Account ID\n ";
	cin >> ID;
	cin.ignore();  

	//entering userName
	cout << "Enter User Name: ";
	getline(cin, UserName);


	//Basically Copy paste but Password instead of user name
	cout << "Enter Password: ";
	getline(cin, Password);


	UsersAccount user(ID, UserName, Password);

	//brings up the Login
	cout << "\nLogin:\n";


	while (true)
	{

	}

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


