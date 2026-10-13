#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int scoreAt0 = 69; // change this number

// Project 2 — Andrew Bennett
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 95; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 67; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 22; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;
  
  //counter for each letter grade to keep track of how many students got each grade
  int countA = 0;
  int countB = 0;
  int countC = 0;
  int countD = 0;
  int countF = 0;

  //loop through scores array and compare the value at each index with the grade criterias and increase the counter for the relevant grade
  for(int i = 0; i < N; i++)
  {
    //print out the index and the value it contains for every index in scores array
    cout << "[" << i << "]: " << scores[i] << endl;

    //Grade A
    if(scores[i] >= 90)
    {
      countA++;
    }
    //Grade B
    else if(scores[i] < 90 && scores[i] >= 80)
    {
      countB++;
    }
    //Grade C
    else if(scores[i] < 80 && scores[i] >= 70)
    {
      countC++;
    }
    //Grade D
    else if(scores[i] < 70 && scores[i] >= 60)
    {
      countD++;
    }
    //Grade F
    else if(scores[i] < 60)
    {
      countF++;
    }
  }

  // Print A:, B:, C:, D:, and F:. The five totals add up to 30.
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;
    cout << "F: " << countF << endl;

  // TODO: one while loop. If scores[i] is under 60, print:
  // Student at index i needs to come to office hours.
  // Put ++i in the loop or it never ends.
  int index = 0;
  
  while(index < N)
  {
    if(scores[index] < 60)
    {
      cout << "Student at index " << index << " needs to come to office hours." << endl;      
    }

    index++;
  }

  return 0;
}
