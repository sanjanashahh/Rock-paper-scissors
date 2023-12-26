#include <cstdlib> // as in this project we are going to play with the AI, where AI would be playing the game with the user
#include <ctime> // we would be working with runtime of the code, so this library helps us working with the runtime
#include <iostream>
#include <string>

// now we will define the three main variables:
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

// While playing there are three scenarios:
/*
  Rock vs scissors...... rock wins
  Paper vs scissors...... scissors wins
  Rock vs paper............rock wins
 other than the above scernarios everything would be considered as a draw.*/

int main() {

  srand((unsigned int)time(NULL));

  int player_throw = 0;
  int ai_throw = 0;

  bool draw = false;

  do {
    cout << "Select your throw" << endl;
    cout << "1. ROCK" << endl;
    cout << "2. PAPPER" << endl;
    cout << "3. SCISSORS" << endl;
    cout << "Selection:" << endl;

    cin >> player_throw;

    cout << endl;

    ai_throw = (rand() % 3) + 1;

    if (ai_throw == ROCK) {
      cout << "AI throws rock" << endl;
    } else if (ai_throw == PAPER) {
      cout << "AI throws paper" << endl;
    } else if (ai_throw == SCISSORS) {
      cout << "AI throws scissors" << endl;
    }

    draw = false;

    if (player_throw == ai_throw) {
      draw = true;
      cout << "Draw!! Play again" << endl;
    } else if (player_throw == ROCK && ai_throw == SCISSORS) {
      cout << "Player wins! rock wins" << endl;
    } else if (player_throw == ROCK && ai_throw == PAPER) {
      cout << "Player wins! rock wins" << endl;
    } else if (player_throw == PAPER && ai_throw == SCISSORS) {
      cout << "AI wins! scissors wins" << endl;
    } else if (player_throw == PAPER && ai_throw == ROCK) {
      cout << "AI wins! scissors wins" << endl;
    } else if (player_throw == SCISSORS && ai_throw == ROCK) {
    }

  } while (draw);

  // now we have options from 1, 2, 3 and random number intiates:

  return 0;
}