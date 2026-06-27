#include <iostream>
using namespace std;

struct Ticket {
    int ticketId;
    string passengerName;
    string destination;
};

int main() {
    Ticket tickets[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== TICKET BOOKING SYSTEM =====" << endl;
        cout << "1. Book Ticket" << endl;
        cout << "2. View All Bookings" << endl;
        cout << "3. Search Booking" << endl;
        cout << "4. Cancel Ticket" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            cout << "Enter Ticket ID: ";
            cin >> tickets[count].ticketId;

            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, tickets[count].passengerName);

            cout << "Enter Destination: ";
            getline(cin, tickets[count].destination);

            count++;

            cout << "Ticket Booked Successfully!" << endl;
            break;
        }

        case 2: {
            if(count == 0) {
                cout << "No Bookings Found!" << endl;
                break;
            }

            cout << endl;
            cout << "===== BOOKING LIST =====" << endl;

            for(int i = 0; i < count; i++) {
                cout << "Ticket ID: " << tickets[i].ticketId << endl;
                cout << "Passenger Name: " << tickets[i].passengerName << endl;
                cout << "Destination: " << tickets[i].destination << endl;
                cout << endl;
            }

            break;
        }

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Ticket ID: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(tickets[i].ticketId == id) {
                    cout << "Ticket Found" << endl;
                    cout << "Passenger: " << tickets[i].passengerName << endl;
                    cout << "Destination: " << tickets[i].destination << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Booking Not Found!" << endl;

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Ticket ID to Cancel: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(tickets[i].ticketId == id) {

                    for(int j = i; j < count - 1; j++) {
                        tickets[j] = tickets[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "Ticket Cancelled Successfully!" << endl;
                    break;
                }
            }

            if(!found)
                cout << "Booking Not Found!" << endl;

            break;
        }

        case 5:
            cout << "Thank You" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}