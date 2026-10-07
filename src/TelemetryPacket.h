#pragma once

#include <string>

struct TelemetryPacket {
  double timestamp;
  unsigned int sequenceNumber;
  std::string vehicleId;
  double speed;
  double acceleration;
  int rpm;
  double latitude;
  double longitude;
  double fuelLevel;
};
