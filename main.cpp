#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "function.h"
#include "functions.cpp"

using namespace std;


int main()
{
  int choice;
  vector<Note> notes;
  Load_note(notes);



  while (true)
 {
    cout << "====== Notes App ======" << endl;

    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Delete" << endl;
    cout << "4. Edit" << endl;
    cout << "5. Find note" << endl;
    cout << "6. Exit" << endl;


    cout<<"Enter your choice"<<endl;
    cin>>choice;


    if (choice ==1)
    {
        Add(notes);
    }

   else if (choice ==2)
   {
       View(notes);
   }

    else if (choice ==3)
    {
           Delete(notes);
    }

    else if (choice ==4)
       {
           Edit(notes);
       }

    else if (choice ==5)
    {
        Find_note(notes);
    }

    else if (choice ==6)
    {
        break;
    }

    else
    {
        cout<<"Invalid number";
        break;

    }
 }


    return 0;
}


