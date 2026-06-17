#include "function.h"

 void Add (vector<Note> & notes)
  {
     Note note;

    cout << "Enter title" << endl;
    getline(cin, note.title);

    cout << "Enter content" << endl;
    getline(cin, note.content);

      notes.push_back(note);

      Save_note(notes);
  }


  void View (vector<Note> & notes)
  {
     for (int i=0; i<notes.size(); i++)
     {
       cout<<i+1<<". "<<notes[i].title << endl;
       cout << notes[i].content << endl;
     }
  }



  void Delete (vector<Note> & notes)
  {
      int num;
      cout<<"Enter the note number to be deleted"<<endl;
      cin>>num;

      if (num<=0 || num> notes.size())
      {
          cout<<"Invalid number";
          return;
      }

      notes.erase(notes.begin() + (num - 1));

      Save_note(notes);
  }

   void Save_note (vector<Note> & notes)
    {
        ofstream txt_save;

        txt_save.open("notes.txt");

        for (int i=0; i<notes.size(); i++)
            {
            txt_save << notes[i].title << endl;
            txt_save << notes[i].content << endl;
            }

            txt_save.close();
    }

    void Load_note (vector<Note> & notes)
        {
            ifstream txt_save;

            txt_save.open("notes.txt");

            string line;

            Note note;

           notes.clear();

         while (getline(txt_save, note.title))
     {
        getline(txt_save, note.content);

        notes.push_back(note);
     }
    }


    void Edit (vector<Note> & notes)
 {
    string new_note;
    int num;

    cout << "Enter the note number to be edited" << endl;
    cin >> num;

    cin.ignore();

    cout << "Enter the new note" << endl;
    getline(cin, new_note);

    notes[num-1].content = new_note;

    Save_note(notes);
 }

    void Find_note (vector <Note> & notes)
        {
            string  search_note;

            bool found =false;

            cout<<"Enter the note to be searched"<<endl;

            cin.ignore();
            getline (cin, search_note);

           for(int i=0; i<notes.size(); i++)
           {
               if (notes[i].title.find(search_note) != string::npos)

               found =true;

               cout<<search_note<<endl;
           }

           if (found == false)
           {
               cout<<"Note not found";
           }


        }

