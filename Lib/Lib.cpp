// Code made by Bouraoui Elfeghih
#include <iostream>
#include <string>

int main() 
{
    std::string adjective, adjective1, bird, room, verbP, verb, relative, noun, liquid, verbIng, body, nounP, verbIng1, noun1;

    std::cout << "Give me an adjective: ";
    std::cin >> adjective;
    std::cout << "Give me an adjective: ";
    std::cin >> adjective1;
    std::cout << "Give me a type of bird: ";
    std::cin >> bird;
    std::cout << "Give me a room in a house: ";
    std::cin >> room;
    std::cout << "Give me a past tense verb: ";
    std::cin >> verbP;
    std::cout << "Give me a verb: ";
    std::cin >> verb;
    std::cout << "Give me a relative's name: ";
    std::cin >> relative;
    std::cout << "Give me a noun: ";
    std::cin >> noun;
    std::cout << "Give me a liquid: ";
    std::cin >> liquid;
    std::cout << "Give me a verb ending in -ing: ";
    std::cin >> verbIng;
    std::cout << "Give me a part of the body(plural): ";
    std::cin >> body;
    std::cout << "Give me a plural noun: ";
    std::cin >> nounP;
    std::cout << "Give me a verb ending in -ing: ";
    std::cin >> verbIng1;
    std::cout << "Give me a noun: ";
    std::cin >> noun1;

    std::cout << "It was a " << adjective << ", cold November day. I woke up to the " << adjective1 << " smell of " << bird << " roasting in the " << room << " downstairs." << "\n";
    std::cout << "I " << verbP << " down the stairs to see if I could help " << verb << " the dinner. " << "My mom said, ""See if " << relative << " needs a fresh " << noun << "." << "\n";
    std::cout << "So I carried a tray of glasses full of " << liquid << " into the " << verbIng << " room. When I got there, I couldn't believe my " << body << "! There were " << nounP << " " << verbIng1 << " on the " << noun1 << "!" << "\n";

}
