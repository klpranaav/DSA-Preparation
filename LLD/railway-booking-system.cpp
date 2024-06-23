#include<bits/stdc++.h>
using namespace std;

class Passenger {
public:
    string name;
    int age;
    string gender;
    string berthPreference;

    Passenger(string n, int a, string g, string bp)
    : name(n), age(a), gender(g), berthPreference(bp) {}
};

class Ticket {
public:
    int id;
    Passenger passenger;
    string berthType;
    bool isConfirmed;
    char startStop;
    char endStop;

    Ticket(int id, Passenger p, string bt, bool isConfirmed, char start, char end)
    : id(id), passenger(p), berthType(bt), isConfirmed(isConfirmed), startStop(start), endStop(end) {}
};

class Reservation {
private:
    vector<Ticket> confirmedSeats;
    queue<Ticket> racSeats;
    queue<Ticket> waitingList;
    
    int confirmedCount = 63;
    int racCount = 18;
    int waitingListCount = 10;

    int ticketId = 1;
    vector<char> stops = {'A', 'B', 'c', 'D'};

public:
    void bookTicket(Passenger p, char start, char end) {
        if(p.age < 5){
            cout << "Cannot book tickets for children" << endl;
            return;
        }

        if(isSeatAvailable(start, end)){
            string berthType = allocateBerth(p);
            confirmedSeats.push_back(Ticket(ticketId++, p, berthType, true, start, end));
            cout << "Ticket confirmed with" << berthType << endl;
        }
        else if(racSeats.size() < racCount){
            racSeats.push(Ticket(ticketId++, p, "Side Lower", false, start, end));
            cout << "Ticket added to RAC List" << endl;
        }
        else if(waitingList.size() < waitingListCount) {
            waitingList.push(Ticket(ticketId++, p, "waiting", false, start, end));
            cout << "Ticket added to waiting list" << endl;
        }
        else {
            cout << "No tickets available" << endl;
        }
    }

    void cancelTicket(int id){
        auto it = find_if(confirmedSeats.begin(), confirmedSeats.end(), [id](Ticket &t) { return (t.id == id); });
        if(it != confirmedSeats.end()){
            confirmedSeats.erase(it);
            cout << "Ticket cancelled" << endl;
            if(!racSeats.empty()){
                Ticket t = racSeats.front();
                racSeats.pop();
                t.isConfirmed = true;
                confirmedSeats.push_back(t);
            }
            if(!waitingList.empty()){
                racSeats.push(waitingList.front());
                waitingList.pop();
            }
        }
        else {
            cout << "Ticket ID is not found in confirmed tickets" << endl;
        }
    }

    void printBookedTickets(){
        cout << "Booked Tickets:" << endl;
        for(const Ticket &t : confirmedSeats){
            cout << "Ticket ID: " << t.id << " , Name: " << t.passenger.name << " , Age: " << t.passenger.age << ", Gender: " << t.passenger.gender << " , Preferred Berth: " << t.passenger.berthPreference << " , From: " << t.startStop << " , End: " << t.endStop << endl;
        }
        cout << "Total Booked Tickets: " << confirmedSeats.size() << endl;
    }

    void printAvailableTickets(){
        int availableConfirmedSeats = confirmedCount - confirmedSeats.size();
        int availableRacSeats = racCount - racSeats.size();
        int availableWaitListSeats = waitingListCount - waitingList.size();

        cout << "Available Tickets:" << endl;
        cout << "Confirmed:" << availableConfirmedSeats << endl;
        cout << "RAC:" << availableRacSeats << endl;
        cout << "Wait List:" << availableWaitListSeats << endl;
    }

private:
    string allocateBerth(Passenger p) {
        if(p.age > 60 || (p.gender == "Female" && p.berthPreference == "Lower")){
            return "Lower";
        }
        else if(p.berthPreference == "Lower" || p.berthPreference == "Middle" || p.berthPreference == "Upper"){
            return p.berthPreference;
        }
        else
            return "Upper";
    }

    bool isSeatAvailable(char start, char end){
        for(const Ticket &t : confirmedSeats){
            if(!(t.endStop <= start || t.startStop >= end)){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Reservation r;
    int choice;

    while(true){
        cout << "1. Book Ticket\n2. Cancel Ticket\n3. Print Booked Tickets\n4. Print Available Tickets\n5. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, gender, berthPreference;
            int age;
            char startStop, endStop;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter gender: ";
            cin >> gender;
            cout << "Enter berth preference (Lower/Upper/Middle): ";
            cin >> berthPreference;
            cout << "Enter start stop (A/B/C/D): ";
            cin >> startStop;
            cout << "Enter end stop (A/B/C/D): ";
            cin >> endStop;

            Passenger p(name, age, gender, berthPreference);
            r.bookTicket(p, startStop, endStop);
        }
        else if (choice == 2) {
            int ticketID;
            cout << "Enter ticket ID to cancel: ";
            cin >> ticketID;
            r.cancelTicket(ticketID);
        }
        else if (choice == 3) {
            r.printBookedTickets();
        }
        else if (choice == 4) {
            r.printAvailableTickets();
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}