//main file Proj1
#include "Proj1.h"
#include <iostream>
#include <fstream>//cplusplus.com
#include <string>

using namespace std;

int main (int argc, char **argv)
{
  Proj1 *Proj = new Proj1();

  while(true){
    //reading the inut file
    string line;
    //conner input file
    ifstream conner ("input.txt");

    if (conner.is_open())
    {
      while (getline(conner, line))
      {
        cout << line << '\n';
      }
      conner.close();
    }

    // connor.outfile
      ofstream connor ("connor.out");
      if(connor.is_open())
      {
        connor << "Connor Cowher 2322777" << endl;
        connor << "Programming Assignment 1" << endl;
        connor << "\n";
        connor << "The Sum of the length of the DNA string is: " << Proj->sumDNA() << endl;
        connor << "The Mean of the DNA string length is: " << Proj->meanDNA() << endl;
        connor << "The Variance of the length of the DNA string is: " << endl;
        connor << "The Standard Deviation of the length of the DNA String is: "  << endl;
        connor << '\n';
        connor << "The relative probability of each nucleotide is listed below: " << endl;
        connor << "A: " << Proj->charCalc('A') << endl;
        connor << "C: " << Proj->charCalc('C') << endl;
        connor << "T: " << Proj->charCalc('T') << endl;
        connor << "G: " << Proj->charCalc('G') << endl;
        connor << '\n';
        connor << "Here is the relative probability of each nucleotide bigram: " << endl;
        connor << "AA:   ";// << Proj->strCalc("AA") << endl;
        connor << "AC:   ";// << Proj->strCalc("AC") << endl;
        connor << "AT:   ";// << Proj->strCalc("AT") << endl;
        connor << "AG:   ";// << Proj->strCalc("AG") << endl;
        connor << "CA:   ";// << Proj->strCalc("CA") << endl;
        connor << "CC:   ";// << Proj->strCalc("CC") << endl;
        connor << "CT:   ";// << Proj->strCalc("CT") << endl;
        connor << "CG:   ";// << Proj->strCalc("CG") << endl;
        connor << "TA:   ";// << Proj->strCalc("TA") << endl;
        connor << "TC:   ";// << Proj->strCalc("TC") << endl;
        connor << "TT:   ";// << Proj->strCalc("TT") << endl;
        connor << "TG:   ";// << Proj->strCalc("TG") << endl;
        connor << "GA:   ";// << Proj->strCalc("GA") << endl;
        connor << "GC:   ";// << Proj->strCalc("GC") << endl;
        connor << "GT:   ";// << Proj->strCalc("GT") << endl;
        connor << "GG:   ";// << Proj->strCalc("GG") << endl;
    }

    connor.close();
    cout << "Done!";
    return 0;
  }
}
