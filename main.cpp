#include <iostream>

int main ( ) {

    int Gryffindor = 0;
    int Hufflepuff = 0;
    int Ravenclaw = 0;
    int Slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "The Sorting Hat Quiz!\n";

    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n\n";

    std::cin >> answer1;

    if ( answer1 == 1 ) {
        Hufflepuff ++;
    } else if ( answer1 == 2 ) {
        Slytherin ++;
    } else if ( answer1 == 3 ) {
        Ravenclaw ++;
    } else if ( answer1 == 4 ) {
        Gryffindor ++;
    } else
        std::cout << "Invalid Input\n";

    std::cout << "Q2) Dawn or Dusk?\n\n";

    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";

    std::cin >> answer2;

    if ( answer2 == 1 ) {

        Gryffindor ++;
        Ravenclaw ++;
    } else if ( answer2 == 2 ) {

        Hufflepuff ++;
        Slytherin ++;
    } else
        std::cout << "Invalid input\n";

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    std::cin >> answer3;

    if ( answer3 == 1 ) {

        Slytherin ++;
    } else if ( answer3 == 2 ) {

        Hufflepuff ++;
    } else if ( answer3 == 3 ) {

        Ravenclaw ++;
    } else if ( answer3 == 4 ) {

        Gryffindor ++;
    } else
        std::cout << "Invalid input\n";

    std::cout << "Q4) Which road tempts you most?\n\n";

    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    std::cin >> answer4;

    if ( answer4 == 1 ) {

        Hufflepuff ++;
    } else if ( answer4 == 2 ) {

        Slytherin ++;
    } else if ( answer4 == 3 ) {

        Gryffindor ++;
    } else if ( answer4 == 4 ) {

        Ravenclaw ++;
    } else
        std::cout << "Invalid input\n";

    int max = 0;

    std::string house;

    if ( Gryffindor > max ) {

        max = Gryffindor;
        house = "Gryffindor";
    }
    if ( Hufflepuff > max ) {

        max = Hufflepuff;
        house = "Hufflepuff";
    }
    if ( Ravenclaw > max ) {

        max = Ravenclaw;
        house = "Ravenclaw";
    }
    if ( Slytherin > max ) {

        max = Slytherin;
        house = "Slytherin";
    }
    std::cout << house << "!\n";


}













