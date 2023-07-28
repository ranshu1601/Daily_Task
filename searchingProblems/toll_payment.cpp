#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vehicle {
public:
    Vehicle(const string& regNumber, int numAxles) : registrationNumber(regNumber), numAxles(numAxles) {}

    const string& getRegistrationNumber() const {
        return registrationNumber;
    }

    int getNumAxles() const {
        return numAxles;
    }

private:
    string registrationNumber;
    int numAxles;
};

class TollBooth {
public:
    TollBooth() : totalRevenue(0) {}

    void processVehicle(const Vehicle& vehicle) {
        int tollAmount = calculateToll(vehicle);
        totalRevenue += tollAmount;
        cout << "Vehicle " << vehicle.getRegistrationNumber() << " paid toll amount: $" << tollAmount << endl;
    }

    int getTotalRevenue() const {
        return totalRevenue;
    }

private:
    int calculateToll(const Vehicle& vehicle) const {
        // You can implement your toll calculation logic here based on the vehicle type, axles, etc.
        // For simplicity, let's assume a flat rate of $5 per axle.
        return 5 * vehicle.getNumAxles();
    }

    int totalRevenue;
};

int main() {
    vector<Vehicle> vehicles;
    vehicles.push_back(Vehicle("ABC123", 2));
    vehicles.push_back(Vehicle("XYZ789", 3));

    TollBooth tollBooth;

    for (const auto& vehicle : vehicles) {
        tollBooth.processVehicle(vehicle);
    }

    cout << "Total revenue collected: $" << tollBooth.getTotalRevenue() << endl;

    return 0;
}
