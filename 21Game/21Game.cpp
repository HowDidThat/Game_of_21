#include <iostream>
#include <string.h>
#include "Deck.h"
#include "Extras.h"

int Start_game()
{
    Deck new_deck;
    Player player, dealer;
    dealer.Make_dealer();
    new_deck.Create();
    new_deck.Shuffle();
    new_deck.Deal_card(&player);
    new_deck.Deal_card(&dealer);
    new_deck.Deal_card(&player);
    new_deck.Deal_card(&dealer);
   
    Game_stats gs;
    char response[10];
    while (gs.still_playing)
    {
        Info(&new_deck, &player, &dealer);
        cin.getline(response, 10);
        if (strcmp(response, "q")==0)
            return 0;
        else if (strcmp(response, "hit")==0)
        {
            new_deck.Deal_card(&player);
        }
        else
        {   
            while (dealer.Return_total() < 15)
            {
                new_deck.Deal_card(&dealer);
                Info(&new_deck, &player, &dealer);
            }
            if (player.Return_total() > 21)
                cout << "Game lost" << '\n';
            else if (dealer.Return_total() > 21)
                cout << "Game won" << '\n';
            else if (dealer.Return_total() == player.Return_total())
                cout << "Draw" << '\n';
            else if (player.Return_total()>dealer.Return_total())
                cout << "Game won" << '\n';
            else 
                cout << "Game lost" << '\n';
            cout << player.Return_total() << ' ' << dealer.Return_total();
            return 0;
        }
    }

}



int main()
{
    Start_game();
    return 0;
}
