#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream myFile("duck.txt");
  myFile << "Anatidaephobia is the fear of ducks \nDucks are always watching you";
  myFile.close();

  ifstream duckFile("duck.txt");
  string data;
  char ch;

  while(duckFile.get(ch))
  {
    // couldn't figure out .puts()
    data += ch;
  }
  duckFile.close();
  cout << data << endl;
}