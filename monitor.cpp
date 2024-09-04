#include "./monitor.h"
#include <assert.h>
#include "./ConsolePrint.h"

int oxySatOk(float spo2) {
  if (spo2 < 90) {
    ConsolePrint::PrintMessage("Oxygen Saturation is abnormal");
    return 0;
  }
  return 1;
}

int tempOk(float temperature) {
  if (temperature > 100 || temperature < 95) {
    ConsolePrint::PrintMessage("Temperature is critical!");
    return 0;
  }
  return 1;
}

int pulseRateOk(float pulseRate) {
  if (pulseRate < 60 || pulseRate > 100) {
    ConsolePrint::PrintMessage("Pulse Rate is out of range!");
    return 0;
  }
  return 1;
}
