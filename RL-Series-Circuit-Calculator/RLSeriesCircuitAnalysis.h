#ifndef RLSERIES
#define RLSERIES


#include <string.h>
#include <iostream>

using namespace std;

class RLSeries 
{
public:

	void askUserTheInputValues(float inductance, float frequency, float resistance, float voltage);

private:
	int theHouseNumber;
};


//--------------------------------ask user to enter values for RL Circuit------------------------------
inline void RLSeries  :: askUserTheInputValues (float inductance, float frequency, float resistance, float voltage)
{
		cout << "Please input to use RL series circuit calculator.\n" 
			 <<"\nInductance in Henry (H): " ;
		cin >> inductance;
		//cout << "Your inductance is:" << inductance <<"\n" << endl;

		cout << "Frequency in Hertz (Hz): " ;
		cin >> frequency;
		//cout << "Your frequency is:" << frequency <<"\n" << endl;

		cout << "Resistance in ohms: " ;
		cin >> resistance;
		//cout << "Your resistance is:" << resistance <<"\n" << endl;

		cout << "Voltage in volts (v): " ;
		cin >> voltage;
		//cout << "Your voltage is: " << voltage <<"\n" << endl;

		//--------------------calculate current for RL circuit------------------------
		float XL = (2*3.141592654*frequency*inductance);
		cout << "\nResistance XL: " << XL <<" ohms" << endl;
		float Z = sqrt((resistance*resistance) +(XL*XL));
		cout << "\nImpedance Z: " << Z <<" ohms" << endl;
		float current = voltage/Z ; 
		cout << "\nCurrent I: " << current <<" A" << endl;

		float apparentPower =  voltage * current;
		cout << "\nApparent power S: " << apparentPower <<" W" << endl;
		
		float phase = atan(XL/resistance)*180/3.1415;
		cout << "\nPhase angle: " << phase <<" Degrees" << endl;
		
}


#endif
