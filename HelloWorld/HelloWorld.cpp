#include <string>
#include <iostream> 
using namespace std; // so we dont have to repeat everytime for std: cout <<

class UsersAccount
{
private:
    // My variables
    int ID;
    string UserName;
    string Password;

public:
    // Constructor
    UsersAccount(int id, const string& username, const string& pwd)
        : ID(id), UserName(username), Password(pwd) {}

    // Login
    bool Login(const string& CreatedUserName, const string& CreatedPassword) const
    {
        return (CreatedUserName == UserName && CreatedPassword == Password);   //started with sudo code then just used c++ :)
    }

    // Getter for ID
    int getID() const
    {
        return ID;
    }
};

int main()
{
    int ID;
    string Password;
    string UserName;
    
    cout << "Welcome to the Login Page !\n ";    // easy display message
    cout <<"Enter Account ID\n ";                 //display again
    cin >> ID;   
    cin.ignore();

    // Entering userName
    cout << "Enter User Name: ";
    getline(cin, UserName);

    // Basically copy paste but Password instead of user name
    cout << "Enter Password: ";
    getline(cin, Password);


    //class with the vairables
    UsersAccount user(ID, UserName, Password);

    // Brings up the Login
    cout << "\nLogin:\n";

    while (true)
    {
        //redefining the strings
        string CreatedUserName, CreatedPassword;

        // UserName Login
        cout << "Enter Username: ";
        getline(cin, CreatedUserName);

        // Copy paste but for Password instead
        cout << "Enter Password: ";
        getline(cin, CreatedPassword);


        // basivally if everything is correct
        if (user.Login(CreatedUserName, CreatedPassword))
        {
            cout << "Login Successful!\n";
            cout << "Account ID: " << user.getID() << "\n";
            break;
        }
        else
        {
            cout << "Login Error, Invalid Username or Password. Try again.\n";
        }
    }
    return 0;
}
