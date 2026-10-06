#pragma once

#include <string>

class Vehicle {
  public:
    Vehicle(std::string vehicleId, double latitude, double longitude);

    // Getters: reads state, returns a value
    std::string getVehicleId() const;
    double getSpeed() const;
    double getAcceleration() const;
    int getRpm() const;
    double getLatitude() const;
    double getLongitude() const;
    double getFuelLevel() const;

    void update(double elapsedTime);  // changes state, returns nothing

  private:
    static constexpr double maxSpeed = 30.0;

    enum class DrivingState {
      Accelerating,
      Cruising,
      Decelerating
    };
    std::string vehicleId;
    double speed;
    double acceleration;
    int rpm;
    double latitude;
    double longitude;
    double fuelLevel;
    double timeInState;
    DrivingState drivingState;

};
