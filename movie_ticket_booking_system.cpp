#include <iostream>
using namespace std;
#include <string>

class MovieTicket
{
private:
    string movieName;
    string seatNumber;
    int ticketPrice;
    string isBooked;

public:
    MovieTicket();
    MovieTicket();
    ~MovieTicket();
};

MovieTicket::MovieTicket()
{
    this->isBooked = "not booked";
    this->ticketPrice = 200;
}

MovieTicket::MovieTicket()
{
    this->movieName = "";
}

MovieTicket::~MovieTicket()
{
}

int main()
{

    return 0;
}