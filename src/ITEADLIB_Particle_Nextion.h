#pragma once

/* ITEADLIB_Particle_Nextion library by Tim Kremer
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class ITEADLIB_Particle_Nextion
{
public:
  /**
   * Constructor
   */
  ITEADLIB_Particle_Nextion();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
