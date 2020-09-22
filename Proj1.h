//header file Proj1.h
#include <iostream>
using namespace std;

class Proj1{
  public:
    Proj1();//default
    //~Proj1();//deconstructor

    int charCalc(char nuc);//calculate how often each nucleotide occurs ing strand
    int strCalc(string bigram);//calculate how often bigrams occur in the DNA string
    int sumDNA();//sum of the DNA string length
    int meanDNA();//mean of the DNA Length in the whole DNA strand
    int variance();//variance of the length of the DNA strand
    int standardDNA();//standard Deviation

    string dNA;
    string dnaout;
    string dNALine;
    string nuc;
    string bigram;

  private:
    int aSize;


};
