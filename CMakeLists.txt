cmake_minimum_required(VERSION 3.25)

project(TelemetrySim VERSION 0.0.0 LANGUAGES CXX)

add_executable(telemetry-sim 
  src/main.cpp
  src/Vehicle.cpp 
)