#ifndef RLPARALLEL
#define RLPARALLEL


#include <string.h>
#include <iostream>

using namespace std;

class RLParallel
{
public:

	void askUserTheInputValues(float inductance, float frequency, float resistance, float voltage);

private:
	int user;
};


//--------------------------------ask user to enter values for RL Circuit------------------------------
inline void RLParallel  :: askUserTheInputValues (float inductance, float frequency, float resistance, float voltage)
{
		cout << "							RL Parallel circuit calculator							" << endl;

		cout << "\nPlease choose the correct following options to use the calculator.\n" <<endl;

		cout << "Enter values to find the total current(I) or current in inductor(IL).\nPress 1 for current(I) OR 2 for current in indoctor(IL) => " ;
		cin >> user;
		
		if(user == 1){
			cout	 <<"\nInductance in Henry (H): " ;
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
		cout << "\n\n---------Resultat----------\n\nResistance XL: " << XL <<" ohms" << endl;
		float Z = 1/(sqrt(     ((1/resistance)*(1/resistance))    +     ((1/XL)*(1/XL))       ));
		cout << "\nImpedance Z: " << Z <<" ohms" << endl;
		float IR = voltage/resistance ; 
		cout << "\nCurrent in resistor IR: " << IR <<" A" << endl;
		float IL = voltage/XL ; 
		cout << "\nCurrent in indector IL: " << IL <<" A" << endl;
		float IT= sqrt((IR*IR)+(IL*IL)); 
		cout << "\nCurrent I: " << IT <<" A" << endl;

		float apparentPower =  voltage * IT;
		cout << "\nApparent power S: " << apparentPower <<" W" << endl;

		float realPower =  voltage * IR;
		cout << "\nReal power P: " << realPower <<" W" << endl;

		float reactivePower =  voltage * IL;
		cout << "\nReactive power Q: " << reactivePower <<" W" << endl;
		
		float phase = atan(resistance/XL)*180/3.1415;
		cout << "\nPhase angle: " << phase <<" Degrees" << endl;
		}

		else {

		cout	 <<"\nInductance in Henry (H): " ;
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

		}

		
		
}


#endif
