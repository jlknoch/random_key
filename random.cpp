#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){

	char chars[] = "qwert_zuiopas_df_ghjklyxcvbnmQWERT_ZUIO_PASDFGHJK_LYXCVBNM1_234567890_";
	string rndchars;
	int length, rndnum;

	cout << "Enter length of password: ";
	cin >> length;

	srand(time(NULL));

	for(int i = 1; i <= length; i++)
	{
	rndnum = rand() % 70 +1;	
	cout << chars[rndnum];
	}
	
	cout << "\n";
	return 0;
}
/*  --- COPYLEFT ---
  
    AUTHOR: 
    Jan-Lukas Knoch
    MAIL: jl_knoch@protonmail.com
    GITHUB: https://github.com/jlknoch/
  
*/
