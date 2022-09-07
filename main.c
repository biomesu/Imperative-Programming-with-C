#include <stdio.h>
#include <math.h>
#include <string.h>

void inputTwoSides(double sideAIn, double sideBIn, int rowIndex);
void inputOneSideAndHyp(double sideAIn, double hypIn, int rowIndex);
void printArray();

// my array of triples
double triples[3][3];
double sideA;
double sideB;
double hyp;


int main(void){
 
  inputOneSideAndHyp(1,3,0);
  inputOneSideAndHyp(1,sqrt(2), 1);
  inputTwoSides(5,1,2);
  printArray();

}

void inputTwoSides(double sideAIn, double sideBIn, int rowIndex){
  triples[rowIndex][0] = sideAIn;
  triples[rowIndex][1] = sideBIn;
  triples[rowIndex][2] = sqrt(pow(sideA,2)+pow(sideB,2));

}
void inputOneSideAndHyp(double sideAIn, double hypIn, int rowIndex){
  triples[rowIndex][0] = sideAIn;
  triples[rowIndex][2] = hypIn;
  triples[rowIndex][1] = sqrt(pow(hyp,2)-pow(sideA,2));
}
void printArray(){

for (int i= 0; i < 3; i++){
    printf("PythTriple [ SideA = %.2f, SideB= %.2f, hyp= %.2f\n", triples[i][0],triples[i][1],triples[i][2]);
  }
}
