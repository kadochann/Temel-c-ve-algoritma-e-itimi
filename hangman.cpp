///*
// * =====================================================================================
// *
// *       filename:  hangman.cpp
// *
// *    description:  hangman game. user guesses needs to guess the letters to a word.
// *                      the user has 10 tries in which to guess the letters.
// *
// *        version:  0.4.1.3
// *        created:  8 march 2012
// *       revision:  none
// *       compiler:  gcc
// *
// *         author:  bernhard breytenbach
// *   organization:  unforged
// *
// * =====================================================================================
// */
//
//#include <iostream> //command prompt ýnput output
//#include <fstream> //usage of files
//#include <curses.h>
//
//using namespace std;
//
//string alphabet="a b c d e f g h i j k l m n o p q r s t u v w x y z"; //used for validation
//string line, guessed, word, display;
//int numlines=0,int tries=0;
//ifstream myfile("words.txt"); //file containing all the words
//
///*******************************
//** create all the underscores **
//*******************************/
//void makedisplay ()
//{
//    display = "";
//    for (int k=0;k<string(word).size();k++)
//        display=display+"_"; //add one underscore for every letter in the word
//    guessed="_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
//}
//
///******************************************************
//** ascýý man!!! d-_-b one for every number of tries! **
//******************************************************/
//string makeman ()
//{
//    switch ( inttries )
//    {
//        case 10:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||\n ||               ||    - *snap!!!*\n ||              /||\\\n ||             //||\\\\\n ||            // || \\\\\n ||            *  ||  *\n ||              //\\\\\n ||             //  \\\\\n /\\            //    \\\\\n//\\\\         ***      ***\n/||\\\\\n_||_\\\\\n";
//        case 9:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||              /||\\\n ||             //||\\\\\n ||            // || \\\\\n ||            *  ||  *\n ||              //\n ||             //\n ||            //\n /\\          ***\n//\\\\ \n/||\\\\ \n_||_\\\\\n";
//        case 8:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||              /||\\\n ||             //||\\\\\n ||            // || \\\\\n ||            *  ||  *\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 7:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||              /||\n ||             //||\n ||            // ||\n ||            *  ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 6:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||               ||\n ||               ||\n ||               ||\n ||               ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 5:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 4:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 3:return "\n  ================|\n //               |\n ||               |\n ||               |\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 2:return "\n  ================\n //\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 1:return "\n\n\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//        case 0:return "\n\n\ncreated by bernhard breytenbach for educational purposes. 2008 - 1012\n\npress * anytime to quit!\n\n\n\n\n\n\n\n\n\n\n\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";
//    }
//}
//
///****************************************
//** check the guessed letter and add it **
//****************************************/
//void guesslet (char a)
//{
//    int correct=0,tried=0,validlet=0,k=0;
//
//    for (k = 0; k < 51; k+=2) //alphabetic checks
//        if (alphabet[k]==a) //check if letter is in alphabet
//        {
//            validlet=1; //confirm valid entery
//            if (guessed[k]!=a) //check to see if the letter has been tried before
//                guessed[k]=a; //save letter in string
//                    else
//                        tried=1; //letter has been tried before
//        }
//    
//    if ((tried!=1) && (validlet==1)) //check if letter is valid and hasn't been tried before
//    {
//        for (k=0;k<string(word).size();k++)
//            if (word[k]==a) //check if the letter is in the word
//            {
//                display[k]=a; //change the underscore to the letter
//                correct=1; //yes, there is at least one correct letter
//            }
//        if (correct!=1)
//           inttries++; //ýf the letter isn't in the word, increase tries
//    }
//}
//
///************************************************
//** select a random word from the text document **
//************************************************/
//int selectrandline ()
//{
//    int randline=0, wordlength=0, k=0;
//    string newword;
//    //generate random line
//    randline = (rand()%numlines)+1;
//    //reset curser to first line
//    myfile.clear();    
//    myfile.seekg(0, ios::beg);
//    //grab line from file
//    for (int lineno = 0; getline (myfile,newword) && lineno < randline; lineno++);
//    wordlength=string(newword).size();
//    word="";
//    for (int i = 0; wordlength>i; i++)
//    {
//        for (k = 0; k < 51; k+=2) //alphabetic checks
//            if (alphabet[k]==newword[i]) //check if letter is in alphabet
//                word=word+newword[i];
//    }
//}
//
///*******************
//** the main class **
//*******************/
//int main ()
//{
//    initscr();
//    char a; //guessing letter
//    srand((unsigned)time(0)); //seed rng
//    while (std::getline(myfile, line)) ++numlines; //open the word list and count how many words are present.
//    
//    while (a!='*') //continuous loop with exit number 2.
//    {
//        selectrandline (); //select a random word from the file
//        makedisplay(); //make the correct number of underscores
//        inttries = 0; //reset number of tries
//        while (display!=word) //exit loop when word is guessed correctly.
//        {
//            cout << makeman (); //draw ascýý man d-_-b
//            cout << "please guess a letter!\nword: " << display << "\nguessed: " << guessed << "\ntries left:" << 10-inttries << "\n";
//            cin >> a; //read user input
//            guesslet(a); //check if letter is valid and in word
//            if (a=='*') inttries=10; //check for quit character
//            if (inttries>=10) display=word; //meet condition to exit loop when tries expire
//        }
//        cout << makeman (); //draw ascýý man d-_-b
//        //message when user loses.
//        if (inttries>=10) cout << "\nyou lost! the word was \"" << word << "\".\npress any key to play again, or * to quit.\n\n";
//        //message when user wins!
//        if (inttries<10) cout << "\nyou won! the word is \"" << word << "\"!\npress any key to play again, or * to quit.\n\n";
//        cin >> a; //read user input
//    }
//
//    return 0;
//}