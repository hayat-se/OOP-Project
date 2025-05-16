#include<iostream>
#include<fstream>
using namespace std;

class User {
protected:
    string userID;
    string name;
    string email;
    string password;

    User();
    virtual void login(string email, string password) = 0;
};

class Passenger : public User 
{
public:
    static int totalAccounts;
private:
    ofstream newUser[100];
    string flightID;
    string seatNumber;

public:
    static void increaseAccounts();
    Passenger(string, string, string, string, string, string);
    void newAccount();
    void bookFlight();
    void cancelBooking();
    void viewTicket();
};

class Admin:public User
{
    public:
    Admin(string, string, string, string);
    void addFlight();
    void removeFlight();
    void updateFlight();
    void viewPassengerList();
    void viewRevenueReport();
};

class Flight
{
private:
    string flightID;
    string origin;
    string destination;
    string departureTime;
    string arrivalTime;
    int totalSeats;
    int bookedSeats;
    double pricePerSeat;
public:
    void getFlightDetails();
};

int Passenger ::totalAccounts = 0;

void Passenger :: newAccount()
{
    string name;
    ofstream newUser[totalAccounts];
    increaseAccounts();
    cout<<"Enter username : ";
    cin>>name;
}




int main()
{
    int ch;
    do
    {
        cout<<"    --  -- \n\n";
        cout<<"1. Admin \n2. Passenger \n\n";
        cout<<"Enter your option : ";
        cin>>ch;

        if(ch == 1)
        {
            int option;
            cout<<" ~~~ LOGIN & SIGN-UP ~~~\n\n";
            cout<<"1. Login \n2. Register\n\n";
            cout<<"Enter your Option : ";
            cin>>option;

            if(option == 1)
            {

            }
            
        }
    }while(true);
}