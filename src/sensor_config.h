#include "MonitorThreads.h"

//#define EXAMPLE "config_examples/sensor_config.magnet_monitor.h"

#ifdef EXAMPLE

#include EXAMPLE

#else
//////////////////////////////////////////
// Configure this monitor node below
//////////////////////////////////////////

const char * node_name = "air_monitor";

std::vector<DCThread *> collectors = {
    new BME280Monitor("sensor/lab/atmosphere/centre"),
    new DSM501A_Monitor("sensor/lab/atmosphere/centre/dust")
};

///////////////////////////////////////////////////////////
// END NODE CONFIGURATION
///////////////////////////////////////////////////////////

#endif