/*
	Programmer Name: Talha Tallat 
	Program Name: RL Parallel circuit
	Program description: The computer calculates the voltages, power, current, impedance and reactance for a parallel circuit of a resistor and an inductor.  
			     Calcolator lets user find unkown values such as total current(I) or current in inductor(IL) or resistor value(R) and displays reactance(XL), Impendance(z),
			     current in resistor(IR), current in inductor(IL), Phase angle(0), apparent Power(S), real power(P), reactive Power(Q).
	Date: 11/10/2021 
	latest update: 21/10/2021
*/

#ifndef RLPARALLEL
#define RLPARALLEL


#include <string.h>
#include <iostream>

using namespace std;

class RLParallel
{
public:

	void askUserTheInputValues(float inductance, float frequency, float resistance, float voltage, float current);

private:
	char user;
};


//--------------------------------ask user to enter values for RL Circuit------------------------------
inline void RLParallel  :: askUserTheInputValues (float inductance, float frequency, float resistance, float voltage, float current)
{
		cout << "					RL Parallel circuit calculator					" << endl;

		cout << "\nPlease choose the correct following options to use the calculator.\n" <<endl;

		cout << "Enter values to find the total current(I) or current in inductor(IL) or resistor value(R).\nPress 1 for current(I) OR 2 for current in indoctor(IL) OR 3 for resistor(R) => " ;
		cin >> user;
		
		if(user == '1' || user == 'I' || user == 'i' ){
			cout	 <<"\nInductance in Henry (H): " ;
			cin >> inductance;
			cout << "Frequency in Hertz (Hz): " ;
			cin >> frequency;
			cout << "Resistance in ohms: " ;
			cin >> resistance;
			cout << "Voltage in volts (v): " ;
			cin >> voltage;

		//--------------------calculate to find current in for RL circuit------------------------
		float XL = (2*3.141592654*frequency*inductance);
		cout << "\n\n---------Result----------\n\nResistance XL: " << XL <<" ohms" << endl;
		float Z = 1/(sqrt(     ((1/resistance)*(1/resistance))    +     ((1/XL)*(1/XL))       ));
		cout << "\nImpedance Z: " << Z <<" ohms" << endl;
		float IR = voltage/resistance ; 
		cout << "\nCurrent in resistor IR: " << IR <<" A" << endl;
		float IL = voltage/XL ; 
		cout << "\nCurrent in indector IL: " << IL <<" A" << endl;
		float I= sqrt((IR*IR)+(IL*IL)); //total current 
		cout << "\nCurrent I: " << I <<" A" << endl;

		float apparentPower =  voltage * I;
		cout << "\nApparent power S: " << apparentPower <<" W" << endl;

		float realPower =  voltage * IR;
		cout << "\nReal power P: " << realPower <<" W" << endl;

		float reactivePower =  voltage * IL;
		cout << "\nReactive power Q: " << reactivePower <<" W" << endl;
		
		float phase = atan(resistance/XL)*180/3.1415;
		cout << "\nPhase angle: " << phase <<" Degrees" << endl;
		}

		else if (user == '2' || user == 'IL' || user == 'il'){
			cout << "Voltage in volts (v): " ;
			cin >> voltage;
			cout << "Frequency in Hertz (Hz): " ;
			cin >> frequency;
			cout << "Resistance in ohms: " ;
			cin >> resistance;
			cout << "Current in Amps (A): " ;
			cin >> current;

			//--------------------calculate to find current in inductor in RL circuit------------------------
			float XL = (voltage/current);
			cout << "\n\n---------Result----------\n\nResistance XL: " << XL <<" ohms" << endl;
			inductance = XL/(2*3.141592654*frequency);
			cout << "\nInductance in Hnery(H): " << inductance <<" H" << endl;
			float Z = 1/(sqrt(     ((1/resistance)*(1/resistance))    +     ((1/XL)*(1/XL))       ));
			cout << "\nImpedance Z: " << Z <<" ohms" << endl;
			float IR = voltage/resistance ; 
			cout << "\nCurrent in resistor IR: " << IR <<" A" << endl;
			float IL = sqrt( (current*current) - (IR*IR) ) ; //current in inductor
			cout << "\nCurrent in inductor IL: " << IL <<" A" << endl;
			float I= sqrt((IR*IR)+(IL*IL)); 
			cout << "\nCurrent I: " << I <<" A" << endl;

			float apparentPower =  voltage * I;
			cout << "\nApparent power S: " << apparentPower <<" W" << endl;

			float realPower =  voltage * IR;
			cout << "\nReal power P: " << realPower <<" W" << endl;

			float reactivePower =  voltage * IL;
			cout << "\nReactive power Q: " << reactivePower <<" W" << endl;
		
			float phase = atan(resistance/XL)*180/3.1415;
			cout << "\nPhase angle: " << phase <<" Degrees" << endl;
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

			//--------------------calculate to find R in RL circuit------------------------
			float XL = (2*3.141592654*frequency*inductance);
			cout << "\n\n---------Result----------\n\nResistance XL: " << XL <<" ohms" << endl;

			float IL = voltage/XL ; 
			cout << "\nCurrent in inductor IL: " << IL <<" A" << endl;

			float IR = sqrt((current*current)-(IL*IL)); 
			cout << "\nCurrent in resistor IR: " << IR <<" A" << endl;

			resistance = voltage/IR;
			cout << "\nResistor R: " << resistance <<" ohms" << endl; //R

			float Z = 1/(sqrt(     ((1/resistance)*(1/resistance))    +     ((1/XL)*(1/XL))       ));
			cout << "\nImpedance Z: " << Z <<" ohms" << endl;

			
			float I= sqrt((IR*IR)+(IL*IL));
			cout << "\nCurrent I: " << I <<" A" << endl;

			float apparentPower =  voltage * I;
			cout << "\nApparent power S: " << apparentPower <<" W" << endl;

			float realPower =  voltage * IR;
			cout << "\nReal power P: " << realPower <<" W" << endl;

			float reactivePower =  voltage * IL;
			cout << "\nReactive power Q: " << reactivePower <<" W" << endl;
		
			float phase = atan(resistance/XL)*180/3.1415;
			cout << "\nPhase angle: " << phase <<" Degrees" << endl;
			}

		else{
			cout << "Please choose the correct options to use the calculator!" <<endl;
		}
		
}


#endif
