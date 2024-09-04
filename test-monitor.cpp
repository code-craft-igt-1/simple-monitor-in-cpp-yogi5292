#include "./monitor.h"

#include "gtest/gtest.h"

TEST(Monitor, NotOkWhenTempIsOffRange) {
  ASSERT_FALSE(tempOk(103));
}

TEST(Monitor, NotOkWhenPulseRateIsOffRange) {
  ASSERT_FALSE(pulseRateOk(102));
}

TEST(Monitor, NotOkWhenOxySatIsOffRange) {
  ASSERT_FALSE(oxySatOk(86));
}

TEST(Monitor, OkWhenTempIsInRange) {
  ASSERT_TRUE(tempOk(98.1));
}

TEST(Monitor, OkWhenPulseRateIsInRange) {
  ASSERT_TRUE(pulseRateOk(100));
}

TEST(Monitor, OkWhenOxySatIsInRange) {
  ASSERT_TRUE(oxySatOk(98));
}
