#ifndef PLANT6_H_
#define PLANT6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

#define NONE 0
#define ADD1 1
#define REMOVE1 2
#define ADD2 3
#define REMOVE2 4

// Plant6 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant6;

// Initialization function
void Plant6Init(Plant6* me);

// Execution function
void Plant6Run(Plant6* me);

#endif // PLANT6_H_
