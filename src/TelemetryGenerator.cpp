#include "TelemetryGenerator.h"

TelemetryPacket createPacket(const Vehicle& vehicle, double timestamp, unsigned int sequenceNumber) {
  TelemetryPacket packet;

  packet.timestamp = timestamp;
  packet.sequenceNumber = sequenceNumber;
  packet.vehicleId = vehicle.getVehicleId();
  packet.speed = vehicle.getSpeed();
  packet.acceleration = vehicle.getAcceleration();
  packet.rpm = vehicle.getRpm();
  packet.latitude = vehicle.getLatitude();
  packet.longitude = vehicle.getLongitude();
  packet.fuelLevel = vehicle.getFuelLevel();

  return packet;
}
