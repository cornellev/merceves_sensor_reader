// 1 = fake, 0 = real ADC
#define USE_FAKE_DATA 0

// Number of channels (RP2040 supports max 4)
#define N_CH 2

// gpio pins for hall effect inputs (left wheel, right wheel)
#define RPM_GPIOS {20, 21}

// number of pulses per full revolution
#define PULSES_PER_REV 10

// report zero if no pulse received in this timeframe
#define RPM_TIMEOUT_US 2000000ULL // 2 seconds
