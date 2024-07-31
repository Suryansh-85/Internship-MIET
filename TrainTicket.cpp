#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Train {
public:
    string trainNumber;
    string trainName;
    string startTime;
    string endTime;
    string startStation;
    string endStation;
    float fare;

    Train(string tn, string tname, string st, string et, string ss, string es, float f)
        : trainNumber(tn), trainName(tname), startTime(st), endTime(et), startStation(ss), endStation(es), fare(f) {}

    void display() const {
        cout << "Train Number: " << trainNumber << ", Train Name: " << trainName
             << ", Start Time: " << startTime << ", End Time: " << endTime
             << ", Start Station: " << startStation << ", End Station: " << endStation
             << ", Fare: $" << fare << endl;
    }
};

class Passenger {
public:
    string name;
    int age;
    string phone;
    string trainNumber;

    Passenger(string n, int a, string p, string tn)
        : name(n), age(a), phone(p), trainNumber(tn) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Phone: " << phone << ", Train Number: " << trainNumber << endl;
    }
};

class RailwayManagementSystem {
private:
    vector<Train> trains;
    vector<Passenger> passengers;

    void loadTrains() {
        ifstream file("trains.txt");
        string line;
        while (getline(file, line)) {
            istringstream ss(line);
            string tn, tname, st, et, ssr, es;
            float f;
            ss >> tn >> tname >> st >> et >> ssr >> es >> f;
            trains.push_back(Train(tn, tname, st, et, ssr, es, f));
        }
        file.close();
    }

    void savePassenger(const Passenger& p) {
        ofstream file("passengers.txt", ios::app);
        file << p.name << " " << p.age << " " << p.phone << " " << p.trainNumber << endl;
        file.close();
    }

    void loadPassengers() {
        ifstream file("passengers.txt");
        string line;
        while (getline(file, line)) {
            istringstream ss(line);
            string n, p, tn;
            int a;
            ss >> n >> a >> p >> tn;
            passengers.push_back(Passenger(n, a, p, tn));
        }
        file.close();
    }

public:
    RailwayManagementSystem() {
        loadTrains();
        loadPassengers();
    }

    void searchTrains(const string& station) const {
        bool found = false;
        for (const auto& train : trains) {
            if (train.startStation == station || train.endStation == station) {
                train.display();
                found = true;
            }
        }
        if (!found) {
            cout << "No trains found for the given station." << endl;
        }
    }

    void bookTicket() {
        string name, phone, trainNumber;
        int age;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Phone Number: ";
        cin >> phone;
        cout << "Enter Train Number: ";
        cin >> trainNumber;

        passengers.push_back(Passenger(name, age, phone, trainNumber));
        savePassenger(passengers.back());
        cout << "Ticket booked successfully!" << endl;
    }

    void viewPassengers() const {
        for (const auto& passenger : passengers) {
            passenger.display();
        }
    }

    void viewTrainFare(const string& trainNumber) const {
        for (const auto& train : trains) {
            if (train.trainNumber == trainNumber) {
                cout << "Fare for Train Number " << train.trainNumber << " is $" << train.fare << endl;
            }
        }
    }

    void displayStationOptions() const {
        cout << "Select a station:" << endl;
        cout << "1. Jammu" << endl;
        cout << "2. Chandigarh" << endl;
        cout << "3. Delhi" << endl;
        cout << "4. Mumbai" << endl;
        cout << "5. Kolkata" << endl;
    }

    stringdyyhhhh-etStationByChoice(int choice) const {
        switch (choice) {
            case 1: return "Jammu";
            case 2: return "Chandigarh";
            case 3: return "Delhi";
            case 4: return "Mumbai";
            case 5: return "Kolkata";
            default: return "";
        }
    }
};

int main() {
    RailwayManagementSystem rms;

    int choice, stationChoice;
    string station, trainNumber;

    while (true) {
        cout << "1. Search Trains by Station" << endl;
        cout << "2. View Train Fare" << endl;
        cout << "3. Book Ticket" << endl;
        cout << "4. View Booked Passengers" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rms.displayStationOptions();
                cin >> stationChoice;
                station = rms.getStationByChoice(stationChoice);
                if (!station.empty()) {
                    rms.searchTrains(station);
                } else {
                    cout << "Invalid station choice!" << endl;
                }
                break;
            case 2:
                cout << "Enter Train Number: ";
                cin >> trainNumber;
                rms.viewTrainFare(trainNumber);
                break;
            case 3:
                rms.bookTicket();
                break;
            case 4:
                rms.viewPassengers();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}

