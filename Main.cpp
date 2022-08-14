#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
void VerticalOutput();
void HorizontalOutput();
int main() 
{
  string response = "";
  int choice;
  do
  {
    cout << "Type in what you want to do\n1)Vertical Runner\n2)Horizontal Runner\n>>";
    cin >> choice;
    if(choice == 1)
    {
      VerticalOutput();
    }
    else
    {
      HorizontalOutput();
    }
    cout << "Would you like to play again?(Y/N) ";
    cin >> response;
  }while(response != "N");
  
}
void VerticalOutput()
{
    
    char course[13] = {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ','|'};
    int location = 6;
    while(location != 0 && location != 12)
    {
      int randLocation = rand() % 3;
      if(randLocation == 0)
      {
        course[location] = 'x';
      }
      else if(randLocation == 1)
      {
        location++;
        course[location] = 'x';
      }
      else
      {
        location--;
        course[location] = 'x';
      }
      for(char c : course)
      {
          cout << c;
      }
      cout << endl;
      course[location] = ' ';
    }
}
void HorizontalOutput()
{
    char course[13] = {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ','|'};
    int count = 0;
    int location = 6;
    while(location != 0 && location != 12)
    {
      system("clear");
      int randLocation = rand() % 3;
      if(randLocation == 0)
      {
        course[location] = 'x';
      }
      else if(randLocation == 1)
      {
        location++;
        course[location] = 'x';
      }
      else
      {
        location--;
        course[location] = 'x';
      }
      for(char c : course)
      {
          cout << c;
      }
      cout << endl;
      course[location] = ' ';
      count++;
      this_thread::sleep_for(chrono::milliseconds(20));
    }
    cout << "It took " << count << " steps" << endl; 
}
