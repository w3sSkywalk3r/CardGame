#include <string>
#include <iostream>
#include <iomanip>
#include <memory>
#include <ctime>
#include <cstdlib>



class Card
{
public:
     std::string suit;
     std::string cardRank;
     void printIndividual();
};

Card deck[52];

//Function Definitions
void shuffleDeck();
void printDeck();
void orderRankDeck();
void newOrder(std::string);


int main()
{
    std::string suit[4] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    std::string cardRank[13] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    short ktr;
    srand(time(0));

    for(auto i = 0; i < 4; ++i)
    {
        for(auto j = 0; j < 13; ++j)
        {
            deck[ktr].suit = suit[i];
            deck[ktr].cardRank = cardRank[j];
            ++ktr;
        }
    }
   std::cout << "Number of Cards in Deck: " << ktr << std::endl;

   std::cout << "Shuffle the Deck: " << std::endl;
   shuffleDeck();
   printDeck();
   std::cout << std::endl << std::endl << "Rank Order: " << std::endl;
   orderRankDeck();
   std::cout << std::endl << std::endl << "New Deck Order: " << std::endl;
   newOrder("Clubs");
   newOrder("Diamonds");
   newOrder("Hearts");
   newOrder("Spades");
}


void shuffleDeck()
{
    short position;
    for(auto i = 0; i < 52; ++ i)
    {
        position = rand()%52;
        Card tempType = deck[i];
        deck[i] = deck[position];
        deck[position] = tempType;
    }
}

void Card::printIndividual()
{
    std::cout << cardRank << " of " << suit << std::endl;
}

void printDeck()
{
    for(auto i = 0; i < 52; ++ i)
    {
         deck[i].printIndividual();
    }
}

void orderRankDeck()
{
    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Two")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Three")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Four")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Five")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Six")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Seven")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Eight")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Nine")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Ten")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Jack")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Queen")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "King")
        {
            deck[i].printIndividual();
        }
    }

    for(auto i = 0; i < 52; ++i)
    {
        if(deck[i].cardRank == "Ace")
        {
            deck[i].printIndividual();
        }
    }
}

void newOrder(std::string suitType)
{
    for(auto i = 0; i < 52; ++i)
    {
        if((deck[i].suit == suitType) && (deck[i].cardRank == "Two"))
        {
            deck[i].printIndividual();
        }
    }
    for(auto j = 0; j < 52; ++j)
    {

        if((deck[j].suit == suitType) && (deck[j].cardRank == "Three"))
        {
            deck[j].printIndividual();
        }
    }
    for(auto k = 0; k < 52; ++k)
    {

        if((deck[k].suit == suitType) && (deck[k].cardRank == "Four"))
        {
            deck[k].printIndividual();
        }
    }

    for(auto l = 0; l < 52; ++l)
    {
        if((deck[l].suit == suitType) && (deck[l].cardRank == "Five"))
        {
            deck[l].printIndividual();
        }
    }

    for(auto m = 0; m < 52; ++m)
    {
        if((deck[m].suit == suitType) && (deck[m].cardRank == "Six"))
        {
            deck[m].printIndividual();
        }
    }
    for(auto n = 0; n < 52; ++n)
    {
        if((deck[n].suit == suitType) && (deck[n].cardRank == "Seven"))
        {
            deck[n].printIndividual();
        }
    }
    for(auto o = 0; o < 52; ++o)
    {
        if((deck[o].suit == suitType) && (deck[o].cardRank == "Eight"))
        {
            deck[o].printIndividual();
        }
    }
    for(auto p = 0; p < 52; ++p)
    {
        if((deck[p].suit == suitType) && (deck[p].cardRank == "Nine"))
        {
            deck[p].printIndividual();
        }
    }
    for(auto q = 0; q < 52; ++q)
    {
        if((deck[q].suit == suitType) && (deck[q].cardRank == "Ten"))
        {
            deck[q].printIndividual();
        }
    }
    for(auto r = 0; r < 52; ++r)
    {
        if((deck[r].suit == suitType) && (deck[r].cardRank == "Jack"))
        {
            deck[r].printIndividual();
        }
    }

    for(auto s = 0; s < 52; ++s)
    {
        if((deck[s].suit == suitType) && (deck[s].cardRank == "Queen"))
        {
            deck[s].printIndividual();
        }
    }

    for(auto t = 0; t < 52; ++t)
    {
        if((deck[t].suit == suitType) && (deck[t].cardRank == "King"))
        {
            deck[t].printIndividual();
        }
    }

    for(auto u = 0; u < 52; ++u)
    {
        if((deck[u].suit == suitType) && (deck[u].cardRank == "Ace"))
        {
            deck[u].printIndividual();
        }
    }
    }
