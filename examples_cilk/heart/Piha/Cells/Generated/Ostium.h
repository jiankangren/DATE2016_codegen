#ifndef OSTIUM_H_
#define OSTIUM_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../Generic/step.h"
#include "../States.h"

// Cell Data Struct
typedef struct {
	// State
	enum cellStates state;
	
	// Outputs
	double v_x;
	double v_y;
	double v_z;
	double v;
	double theta;
	double v_O;
	double f_theta;
	
	// Inputs
	double v_i_0;
	double v_i_1;
	double v_i_2;

	// Internal Variables
	double g;
} Ostium;

// Initialization function
void OstiumInit(Ostium* me);

// Execution function
void OstiumRun(Ostium* me);

#endif // OSTIUM_H_
