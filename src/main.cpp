#include "Vehicle.h"
#include <iostream>

using namespace std;

int main() {

  cout << "TelemetrySim starting..." << endl;

  Vehicle vehicle("vehicle-001", 36.1627, -86.7816);

  const double elapsedTime = 1.0;
  double simulationTime = 0.0;

  for (int i = 0; i < 18; ++i) {
    vehicle.update(elapsedTime);
    simulationTime += elapsedTime;
    cout << "Time: " << simulationTime << "s | Speed: "
         << vehicle.getSpeed()
         << " | Acceleration: "
         << vehicle.getAcceleration()
         << endl;
  }

  cout << "Vehicle ID: " << vehicle.getVehicleId() << endl;
  cout << "Speed: " << vehicle.getSpeed() << endl;
  cout << "Acceleration: " << vehicle.getAcceleration() << endl;
  cout << "RPM: " << vehicle.getRpm() << endl;
  cout << "Latitude: " << vehicle.getLatitude() << endl;
  cout << "Longitude: " << vehicle.getLongitude() << endl;
  cout << "Fuel Level: " << vehicle.getFuelLevel() << endl;
}
