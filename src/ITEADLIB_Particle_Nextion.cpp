/* ITEADLIB_Particle_Nextion library by Tim Kremer
 */

#include "ITEADLIB_Particle_Nextion.h"

/**
 * Constructor.
 */
ITEADLIB_Particle_Nextion::ITEADLIB_Particle_Nextion()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void ITEADLIB_Particle_Nextion::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void ITEADLIB_Particle_Nextion::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void ITEADLIB_Particle_Nextion::doit()
{
    Serial.println("called doit");
}
