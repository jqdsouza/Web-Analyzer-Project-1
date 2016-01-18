#include <iostream>
#include <fstream> 

using namespace std;

int main() {
ifstream infile; 
ofstream outfile; 

infile.open("ece150-proj1-input.txt");
outfile.open("ece150-proj1-output.txt");

char c;
int i;
float average;
int counter = 1;
float num_zero = 0;
float num_one = 0;
float num_two = 0;
float num_three = 0;
float num_four = 0;
float num_five = 0;

while(infile >> noskipws >> c){
	if(c == ' '){
	    infile >> i; 
		
		if(!infile.fail() and ((counter%2) != 0)){
		average += i;
		counter += 1;
		}
		
		else if(!infile.fail() and ((counter%2) == 0)){
		switch(i){
			case 0:
				num_zero+=1;
				break;
			case 1:
				num_one+=1;
				break;
			case 2:
				num_two+=1;
				break;
			case 3:
				num_three+=1;
				break;
			case 4:
				num_four+=1;
				break;
			case 5:
				num_five+=1;
				break;
			default:
				return -1; 
		}
		counter+=1;
		}
	
		else {
		infile.clear();
		}
	}		
	}
	
float average_size, expected_priority_delay, expected_total_delay;
	
average_size = average/(counter/2);
expected_priority_delay = ((num_zero*0) + (num_one*1) + (num_two*2) + (num_three*3) + (num_four*4) + (num_five*5)) / (counter/2);
expected_total_delay = (average_size*0.8) + expected_priority_delay;
	
outfile <<"Average size = "<<average_size<< endl;
outfile <<"Expected delay for priority = "<<expected_priority_delay<< endl;
outfile <<"Expected total delay = "<<expected_total_delay<< endl;
	
infile.close();
outfile.close();

return 0;
}
