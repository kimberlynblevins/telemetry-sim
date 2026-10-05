#include "Vehicle.h"

Vehicle::Vehicle(std::string vehicleId, double latitude, double longitude) 
  : vehicleId(vehicleId),
    speed(0.0),
    acceleration(0.0),
    rpm(0),
    latitude(latitude),
    longitude(longitude),
    fuelLevel(100.0)
{  
}

// GETTERS
std::string Vehicle::getVehicleId() const {
  return vehicleId;
}

double Vehicle::getSpeed() const {
  return speed;
}

double Vehicle::getAcceleration() const {
  return acceleration;
}

int Vehicle::getRpm() const {
  return rpm;
}

double Vehicle::getLatitude() const {
  return latitude;
}

double Vehicle::getLongitude() const {
  return longitude;
}

double Vehicle::getFuelLevel() const {
  return fuelLevel;
}

// UPDATE
void Vehicle::update(double elapsedTime) {
  acceleration = 5.0;
  speed = speed + (acceleration * elapsedTime);
  rpm = 800 + (speed * 50);
  fuelLevel = fuelLevel - (0.1 * elapsedTime);
    if (fuelLevel < 0) {
      fuelLevel = 0;
    }
  latitude = latitude + (0.0001 * elapsedTime);
  longitude = longitude + (0.0001 * elapsedTime);
}