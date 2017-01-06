#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	
	int flength, length, rndnum;
	
	cout << "How much random keys do you want to generate? ";
	cin >> flength;	
	cout << "Enter length of password: ";
	cin >> length;
	
	srand(time(NULL));
	cout << "---STARTLINE---" << endl;

	for(int i = 1; i <= flength; i++)
	{
	char chars[] = "qwert_zuiopas_df_ghjklyxcvbnmQWERT_ZUIO_PASDFGHJK_LYXCVBNM1_234567890_";
	

	for(int i = 1; i <= length; i++)
	{
	rndnum = rand() % 70 +1;
	cout << chars[rndnum];
	}	
	cout << endl;

	}
	
	cout << "---ENDLINE---" << endl;
	return 0;	
}
/*  --- COPYLEFT ---
  
    AUTHOR: 
    Jan-Lukas Knoch
    MAIL: jl_knoch@protonmail.com
    GITHUB: https://github.com/jlknoch/
  
*/
