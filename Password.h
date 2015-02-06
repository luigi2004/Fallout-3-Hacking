#if !defined PASSWORD_H
#define PASSWORD_H

//complete the includes
#include "ListArray.h"
#include "Text.h"


using namespace CSC2110;


class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
<<<<<<< HEAD
	   Password();
	   ~Password();
	   void addWord(String* word);
	   void guess(int try_password, int num_matches);
	   int getNumberOfPasswordsLeft();
	   void displayViableWords();
	   int bestGuess();
	   String* getOriginalWord(int index);
=======

      Password();
      ~Password();
      void addWord(String* word);
      void guess(int try_password, int num_matches);
      int getNumberOfPasswordsLeft();
      void displayViableWords();
      int bestGuess();
      String* getOriginalWord(int index);
>>>>>>> 18f372864414b73fe845548384d8b8d72e202499

};

#endif
