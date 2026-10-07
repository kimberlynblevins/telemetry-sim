#pragma once

#include "Vehicle.h"
#include "TelemetryPacket.h"

TelemetryPacket createPacket(
  const Vehicle& vehicle,
  double timestamp,
  unsigned int sequenceNumber
);
