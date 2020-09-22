#include "Proj1.h"

Proj1::Proj1(){
  string dNA;
  aSize = 1000;
}

int Proj1::charCalc(char nuc){
  int counter = 0;
  for(int i = 0; i < dNA.length(); ++i){
    for(int x = 0; x < dNALine.length(); ++x){
      if(nuc == dNA[x]){
        counter++;
      }
    }
    counter = (counter/sumDNA()) * 100;
  }
  return counter;
}

/*int Proj1::strCalc(string bigram){
  int bcount = 0;
  for(int y = 0; y < dNA.length(); ++y){
    for(int z = 0; z < dNALine.length(); ++z){
      dnaout = dnaout + dNA[z];
      if(bigram == dNA[z]){
        bcount++;
      }
    }
    bcount = (bcount/sumDNA()) * 100;
  }
  return bcount;
}

//This became too much of a problem to fix, I got lost and cannot salvage it
*/

int Proj1::sumDNA(){
  int sum = 0;
  for(int s = 0; s < dNA.length(); ++s){
    for(int z = 0; z < dNALine.length(); ++z){
      sum++;
    }
  }
  return sum;
}

int Proj1::meanDNA(){
  int mean;
  int numLines = 0;
  for(int x = 0; x < dNA.length(); ++x){
    numLines++;
  }
  mean = (sumDNA())/(numLines);
}





//binary seach for pairs
