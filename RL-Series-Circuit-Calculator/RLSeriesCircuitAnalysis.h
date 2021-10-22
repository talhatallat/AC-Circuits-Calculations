#ifndef RLSERIES
#define RLSERIES


#include <string.h>
#include <iostream>

using namespace std;

class RLSeries 
{
public:

	void askUserTheInputValues(float inductance, float frequency, float resistance, float voltage, float current);

private:
	char user;
};


//--------------------------------ask user to enter values for RL Circuit------------------------------
inline void RLSeries  :: askUserTheInputValues (float inductance, float frequency, float resistance, float voltage, float current)
{

	cout << "					RL Series circuit calculator					" << endl;

		cout << "\nPlease choose the correct following options to use the calculator.\n" <<endl;

		cout << "Enter values to find the total current(I) or Inductor(L) or resistor value(R).\nPress 1 for current(I) OR 2 for Indoctor(L) OR 3 for resistor(R) => " ;
		cin >> user;
		
		if(user == '1' || user == 'I' || user == 'i' ){

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
		current = voltage/Z ; 
		cout << "\nCurrent I: " << current <<" A" << endl;

		float apparentPower =  voltage * current;
		cout << "\nApparent power S: " << apparentPower <<" W" << endl;
		
		float phase = atan(XL/resistance)*180/3.1415;
		cout << "\nPhase angle: " << phase <<" Degrees" << endl;
		}

		else if (user == '2' || user == 'L' || user == 'l'){
			cout << "Voltage in volts (v): " ;
			cin >> voltage;
			cout << "Frequency in Hertz (Hz): " ;
			cin >> frequency;
			cout << "Resistance in ohms: " ;
			cin >> resistance;
			cout << "Current in Amps (A): " ;
			cin >> current;

			//--------------------calculate to find Inductor value in RL series circuit------------------------

			float Z = (voltage/current);
			cout << "\nImpedance Z: " << Z <<" ohms" << endl;

			float XL = (sqrt( (Z*Z)   -  (resistance*resistance)  ));
			cout << "\nResistance XL: " << XL <<" ohms" << endl;

			current = voltage/Z ; 
			cout << "\nCurrent I: " << current <<" A" << endl;

			inductance = XL/(2*3.141592654*frequency);
			cout << "\nInductance L: " << inductance <<" H" << endl;

			float apparentPower =  voltage * current;
			cout << "\nApparent power S: " << apparentPower <<" W" << endl;
		
			float phase = atan(XL/resistance)*180/3.1415;
			cout << "\nPhase angle: " << phase <<" Degrees" << endl;
		}
		
		else{
			cout << "Please choose the correct options to use the calculator!" <<endl;
		}
		
}


#endif
