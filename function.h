#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

 struct Note
 {
     string title;
     string content;
 };


 void Add(vector<Note>& notes);
 void View(vector<Note>& notes);
 void Delete(vector<Note>& notes);
 void Edit(vector<Note>& notes);
 void Find_note(vector<Note>& notes);
 void Save_note(vector<Note>& notes);
 void Load_note(vector<Note>& notes);

 #endif
