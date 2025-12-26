#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	    string line;

    // write first line
    dest << "-------------------- BOOM ---------------------" << endl;

    // copy all content from source to destination
    while(getline(source, line)){
        dest << line << endl;
    }

    // write last line
    dest << "-------------------- HA!! ---------------------" << endl;


    source.close();
    dest.close();
	return 0;
}
