/*
	Programmer Name: Talha Tallat 
	Program Name: RL series circuit
	Program description: The computer calculates the voltages, power, current, impedance and reactance for a series circuit of a resistor and an inductor. 
			     Calculator lets user find unknown values such as total current(I) or voltage in inductor(VL) or resistor value(R) and displays reactance(XL), 
			     Impendence(z), voltage in resistor(VR), voltage in inductor(VL), Phase angle(0), apparent Power(S), real power(P), reactive Power(Q).
	Date: 11/10/2021 
	latest update: 23/10/2021
*/
#ifndef RLSERIES
#define RLSERIES

#include <string.h>
#include <iostream>
#include <cmath>

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
		
		cout << "Frequency in Hertz (Hz): " ;
		cin >> frequency;

		cout << "Resistance in ohms: " ;
		cin >> resistance;

		cout << "Voltage in volts (v): " ;
		cin >> voltage;

		//--------------------calculate current for RL circuit------------------------
		float XL = (2*3.141592654*frequency*inductance);
		cout << "\nResistance XL: " << XL <<" ohms" << endl;

		float Z = sqrt((resistance*resistance) +(XL*XL));
		cout << "\nImpedance Z: " << Z <<" ohms" << endl;

		current = voltage/Z ; 
		cout << "\nCurrent I: " << current <<" A" << endl;

		float VR = current*resistance;
		cout << "\nVoltage across resistor(VR): " << VR <<" V" << endl;

		float VL = current*XL; 
		cout << "\nVoltage across Inductor(VL): " << VL <<" V" << endl;

		float phase = atan(XL/resistance)*180/3.1415;
		cout << "\nPhase angle: " << phase <<" Degrees" << endl;

		float S =  voltage * current;
		cout << "\nApparent power S: " << S <<" W" << endl;

		float P =  S * cos(phase*(3.141592654/180));
		cout << "\nReal power P: " << P <<" W" << endl;

		float Q =  S * sin(phase*(3.141592654/180));
		cout << "\nApparent power Q: " << Q <<" W" << endl;
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

			float VR = current*resistance;
			cout << "\nVoltage across resistor(VR): " << VR <<" V" << endl;

			float VL = current*XL; 
			cout << "\nVoltage across Inductor(VL): " << VL <<" V" << endl;

			float phase = atan(XL/resistance)*180/3.1415;
			cout << "\nPhase angle: " << phase <<" Degrees" << endl;

			float S =  voltage * current;
			cout << "\nApparent power S: " << S <<" W" << endl;

			float P =  S * cos(phase*(3.141592654/180));
			cout << "\nReal power P: " << P <<" W" << endl;

			float Q =  S * sin(phase*(3.141592654/180));
			cout << "\nApparent power Q: " << Q <<" W" << endl;
		}


		else if (user == '3' || user == 'R' || user == 'r'){
			cout << "Voltage in volts (v): " ;
			cin >> voltage;
			cout << "Frequency in Hertz (Hz): " ;
			cin >> frequency;
			cout	 <<"Inductance in Henry (H): " ;
			cin >> inductance;
			cout << "Current in Amps (A): " ;
			cin >> current;

			//------------------calculating to find voltage across resistor in RL circuit--------------
			
			float XL = (2*3.141592654*frequency*inductance);//(sqrt( (Z*Z)   -  (resistance*resistance)  ));
			cout << "\nResistance XL: " << XL <<" ohms" << endl;

			float Z = voltage/current;
			cout << "\nImpedance Z: " << Z <<" ohms" << endl;

			resistance = (sqrt( (Z*Z) -  (XL*XL) ));
			cout << "\nResistance R: " << resistance <<" ohms" << endl;

			float VR = current*resistance;
			cout << "\nVoltage across resistor(VR): " << VR <<" V" << endl;

			float VL = current*XL; 
			cout << "\nVoltage across Inductor(VL): " << VL <<" V" << endl;

			
			float phase = atan(XL/resistance)*180/3.1415;
			cout << "\nPhase angle: " << phase <<" Degrees" << endl;

			float S =  voltage * current;
			cout << "\nApparent power S: " << S <<" W" << endl;

			float P =  S * cos(phase*(3.141592654/180));
			cout << "\nReal power P: " << P <<" W" << endl;

			float Q =  S * sin(phase*(3.141592654/180));
			cout << "\nApparent power Q: " << Q <<" W" << endl;
		}
		
		else{
			cout << "Please choose the correct options to use the calculator!" <<endl;
		}
		
}


#endif
