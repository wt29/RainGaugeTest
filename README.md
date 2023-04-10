# Rain Gauge Test
Part of a Wemos D1 R2 Mini based Weather Station with logging

Optionally
* Anemometer
* Wind Direction / vane
* Rain Gauge - tipping bucket
* Hydreon RG-11 rain sensor - 

This sketch connects via the D1 to the Rain Gauge. Use it, with a serial monitor, to check and calibrate.

To calibrate, you will need a syringe or some other small measuring device. Simply pour, slowly, several syringe contents and see how many buckets are recorded. Add that number to he data.h in the Anemometer sketch and do the math to modify the RG_BUCKETS_PER_RAIN_ML variable in the same value.

https://www.instructables.com/Anemometer-3D-Printed-With-Internet-Logging/

