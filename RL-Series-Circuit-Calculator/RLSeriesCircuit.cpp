/*
	Programmer Name: Talha Tallat 
	Program Name: RL series circuit
	Program description: The computer calculates the voltages, power, current, impedance and reactance for a series circuit of a resistor and an inductor. 
			     Calculator lets user find unknown values such as total current(I) or voltage in inductor(VL) or resistor value(R) and displays reactance(XL), 
		    	     Impendence(z), voltage in resistor(VR), voltage in inductor(VL), Phase angle(0), apparent Power(S), real power(P), reactive Power(Q).
	Date: 11/10/2021 
	latest update: 23/10/2021
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
