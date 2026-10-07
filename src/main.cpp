#include "Vehicle.h"
#include "TelemetryGenerator.h"
#include <iostream>

using namespace std;

int main() {

  cout << "TelemetrySim starting..." << endl;

  Vehicle vehicle("vehicle-001", 36.1627, -86.7816);

  const double elapsedTime = 1.0;
  double simulationTime = 0.0;
  unsigned int sequenceNumber = 1;

  for (int i = 0; i < 18; ++i) {
    vehicle.update(elapsedTime);
    simulationTime += elapsedTime;

    TelemetryPacket packet = createPacket(vehicle, simulationTime, sequenceNumber);

    sequenceNumber++;

    cout << "Packet: "
         << packet.sequenceNumber
         << " | Time: "
         << packet.timestamp
         << "s | Speed: "
         << packet.speed
         << " | Acceleration: "
         << packet.acceleration
         << " | Vehicle ID: "
         << packet.vehicleId
         << " | RPM: "
         << packet.rpm
         << " | Latitude: "
         << packet.latitude
         << " | Longitude: "
         << packet.longitude
         << " | Fuel Level: "
         << packet.fuelLevel
         << "%"
         << endl;
  }

}
