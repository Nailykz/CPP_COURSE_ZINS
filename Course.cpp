#include "Course.h"
using namespace std;

Course::Course(){
    pseudo = "Lambda";
    int temps1=3;
    int temps2=4;
    int temps3=8;
}

Player::Player(std::string name, int course1, int course2, int course3): pseudo(name), temps1(course1),temps2(course2),temps3(course3)
{

}

void Course::moyenne(){
    int moyenne;    
    moyenne = (temps1 + temps2 + temps3)/3;
    cout << "La moyenne du joueur est de " << moyenne << "secondes." << endl;
}

void Course::affichePseudo(){
    std::cout << _PseudoJoueur <<std::endl;
}

void Course::addScore(){}

void Course::afficheScore(){
    int course[3]
    course[0] = temps1;
    course[1] = temps2;
    course[2] = temps3;
}

void Course::classement(){
    
}

void Course::meilleurScoreJoueur(){
    int course[3]
    course[0] = temps1;
    course[1] = temps2;
    course[2] = temps3;

    int meilleurScore = 0;
    for (int i(0); i<3; i++){
        if (list[i]>list[meilleurScore]){
            meilleurScoree = i;
        }
    }
    meilleurScore +=1;

    cout << "Le meilleur temps du joueur est " << meilleurScore << "secondes sur ses 3 courses." <<endl.
}
