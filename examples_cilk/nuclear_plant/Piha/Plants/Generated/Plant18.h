#ifndef PLANT18_H_
#define PLANT18_H_

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

// Plant18 Data Struct
typedef struct {
	// State
	enum plantStates state;
	
	// Inputs
	char control;
	
	// Outputs
	double x;
} Plant18;

// Initialization function
void Plant18Init(Plant18* me);

// Execution function
void Plant18Run(Plant18* me);

#endif // PLANT18_H_