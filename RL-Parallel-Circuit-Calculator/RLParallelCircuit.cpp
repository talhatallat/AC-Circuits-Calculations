/*
	Programmer Name: Talha Tallat 
	Program Name: RL series circuit
	Program description: The computer calculates the voltages, power, current, impedance and reactance for a parallel circuit of a resistor and a inductor.  
			     Calcolator lets use find unkown values such as total current(I) or current in inductor(IL) or resistor value(R) and displayes reactance(XL), Impendance(z),
			     current in resistor(IR), current in inductor(IL), Phase angle(0), apparent Power(S), real power(P), reactive Power(Q).
	Date: 11/10/2021 
	latest update: 21/10/2021
*/

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h> 

#include "RLParallelCircuit.h"

using namespace std;


int main (void)
{
	RLParallel myFirstRLParallel;

	cout << "" <<endl;
	myFirstRLParallel.askUserTheInputValues(0, 0, 0, 0, 0);

	//cout << " \nMain is ending\n" << endl;

	return 0;
}
