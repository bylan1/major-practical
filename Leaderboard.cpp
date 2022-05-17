#include "Leaderboard.h"
#include <string>
#include <fstream>
#include <iostream>
// include header with scores and names

Leaderboard::Leaderboard(){
    currentLeaderboard.open("leaderboard.txt");
}

void Leaderboard::displayStats(){
    std::cout << "Leaderboard" << std::endl
    << "Rank" << "\t\t\t" << "Name" << "\t\t\t"
    << "Score" << std::endl;
    std::cout << "#1" << "\t\t\t"; // #1 name and score from leaderboard .txt file
    std::cout << "#2" << "\t\t\t"; // #2 name and score
    std::cout << "#3" << "\t\t\t"; // #3 name and score
}

void Leaderboard::saveLeaderboard(){
    // if statement comparing score to top score in leaderboard
    while(getline(currentLeaderboard,text)){

    }
}

