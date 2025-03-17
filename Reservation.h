#ifndef Reservation_h
#define Reservation_h
#include "tables.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Reservation {
public:
    struct Node {
        string name;
        string phone_number;
        string date;
        int timee;
        int num_people;
        string status;
        Node* next;
        int thepay;
        int num_tabels;
    }*head;

    string name;
    string phone_number;
    string date;
    int timee;
    int num_people;
    string status ;
    int num;
    int thepay;
    int num_tabels;

    Reservation();
    Reservation(string name, string phone_number, string date, int timee, int num_people, int thepay);//Constructor with parametr
    void display_info(Node *cur);
    void make_reservation(string name, string phone_number, string date, int timee, int num_people, int thepay);
    void make_deposit(Node * newReservation);
    void insertdata();
    void searchReservation();
    bool isValidPhoneNumber(const string& phone);
    bool isValidDateFormat(const string& date);
    bool isValidTimeFormat(int hour);
    void cancelReservation();
    void payiReservation();
    void calculateDailyProfit();


};


 
#endif 
