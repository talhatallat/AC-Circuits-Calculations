/*
	Programmer Name: Talha Tallat 
	Program Name: RL series circuit
	Program description: The computer calculates the voltages, power, current, impedance and reactance for a series circuit of a resistor and a inductor  
	Date: 11/10/2021
*/

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h> 

#include "RLSeriesCircuitAnalysis.h"

using namespace std;


int main (void)
{
	RLSeries myFirstRLSERIES;

	cout << "" <<endl;
	myFirstRLSERIES.askUserTheInputValues(0, 0, 0, 0, 0);

	//cout << " \nMain is ending\n" << endl;

	return 0;
}
