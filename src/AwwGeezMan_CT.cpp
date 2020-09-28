// AwwGeezMan_CT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< endl;
		cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << endl;
		cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << endl;

		return -1;
	}

	//Parse the command line arguments
	// Carmen's Notes: (this is a trial&error thing here)
	// I got to the point where I was able to call upon the desired Morty
	// function, I wanted to add the {step} piece to my program and now things 
	// aren't working like I thought it would. 


	//print the number of command line arguments
	for (int i = 0; i < ac; i++) {
		cout << "av[" << i << "] = " << av[i] << endl;
		string start = av[1];
		string stop = av[2];
		string step = av[3];
		string M_dimension = av[4];

		//since I know where the arguments are, we need to convert
		//them from string to integers. From there we can do the rest
		//I did some changes here, I think this is where I messed up but
		//I'm not sure
		cout << "start = ";
		cin >> start;
		int START = stoi(start);

		cout << "stop = ";
		cin >> stop;
		int STOP = stoi(stop);

		cout << "step = ";
		cin >> step;
		int STEP = stoi(step); 

		cout << "dimension = ";
		cin >> M_dimension;

		string firstDimension = "C137";
		string secondDimension = "Z286";

	// Depending on the dimension of the arguments, call the appropriate Morty
	// function
	//Carmen's Notes: 
	//At first I had START and STOP as the objects parameters, but then I
	//thought about adding in STEP to it as well. Said there were too many so 
	// I tried to simplifiy it and make it just one parameter (int m) and 
	//compare it to START and STOP and increase that number instead
	// This maybe where I went wrong in my program and I'm not so sure how to fix
	//it.
		//since the arguments have been set, we can input different numbers
		if (M_dimension == firstDimension) {//if the dimension is C137
			if (ac == 5) {
				C137 dimension;
				dimension.Morty(START);
			}
			else if (ac == 4) {
				C137 dimension;
				dimension.Morty(START);
			}
		}

        //if the dimension is Z286
		else if (M_dimension == secondDimension) {
			if (ac == 5) {
				Z286 dimension;
				dimension.Morty(START);
			}
			else if (ac == 4) {
				Z286 dimension;
				dimension.Morty(START);
			}
		}
		// when dimension is neither C137 or Z286 for any amount of arguments
		else if (ac == 4) {
			if (firstDimension.compare(M_dimension)) {
				cout << "ERROR: Unknown dimension!!" << endl;
			}
			else(secondDimension.compare(M_dimension)); {
				cout << "ERROR: Unknown dimension!!" << endl;
			}
			break;
		}
		/*when dimension is neither C137 or Z286 for 5 arguments
		else if (ac == 5) {
			if (av[5] != firstDimension) {
				cout << "ERROR: Unknown dimension!!" << endl;
			}
			else if(av[5] != secondDimension); {
				cout << "ERROR: Unknown dimension!!" << endl;
			}*/
		
		break;
	}
	
	return 0;
}
