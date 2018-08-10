// Example usage for ITEADLIB_Particle_Nextion library by Tim Kremer.

#include "ITEADLIB_Particle_Nextion.h"

// Initialize objects from the lib
ITEADLIB_Particle_Nextion iTEADLIB_Particle_Nextion;

void setup() {
    // Call functions on initialized library objects that require hardware
    iTEADLIB_Particle_Nextion.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    iTEADLIB_Particle_Nextion.process();
}
