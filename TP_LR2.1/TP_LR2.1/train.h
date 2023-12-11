#pragma once
#include <iostream>
#include <string>

#define NAME 0
#define NUMBER 1
#define TIME 2

using namespace std;



class train
{
    string prop[3];
    train* nextPtr;

public:

    train();

    string getName();
    string getNumber();
    string getType();
    train* getNextPtr();

    void setName(string str);
    void setNumber(string str);
    void setType(string str);
    void setNextPtr(train* p);

    friend std::ostream& operator<<(std::ostream& os, const train& p)
    {
        return os << "Nomber: " << p.prop[NUMBER] << " Destination: " << p.prop[NAME] << " Time: " << p.prop[TIME] << endl;
    }

    friend std::istream& operator>>(std::istream& in, train& p)
    {
        std::cout << "Nomber: ";
        in.clear();
        in.ignore();
        getline(in, p.prop[NUMBER]);

        std::cout << "Destination: ";
        in.clear();
        getline(in, p.prop[NAME]);

        std::cout << "Time: ";
        in.clear();
        getline(in, p.prop[TIME]);

        in.sync();

        return in;
    }

};