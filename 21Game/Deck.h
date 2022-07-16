#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct card
{
	int type;
	int value;

};

class Player
{
private:
	vector <card> hand;
	bool is_dealer = false;
public:
	void Add(int t, int v);
	void Print();
	void Make_dealer();
	int Return_total();
};
void Player::Make_dealer()
{
	is_dealer = true;
}

int Player::Return_total()
{
	int s=0;	
	int aces = 0;
	for (auto i = hand.begin(); i < hand.end(); ++i)
	{	
		int val = i->value;
		if (val > 9)
			s = s + 10;
		else if (val > 1)
			s = s + val;
		else
			aces++;
	}
	s = s + aces;
	while (s + 9 <= 21 && aces != 0)
	{
		s = s + 9;
		aces--;
	}

	return s;
}
class Deck {
private:
	vector <card> deck;
public:
	void Create();
	void Add(int t, int v);
	void Print();
	void Shuffle();
	void Deal_card(Player *h);

};

void Deck::Create()
{
	for (int i=1;i<=13;i++)
		for (int j = 1; j <= 4; j++)
		{
			this->Add(j, i);
		}
}

void Deck::Add(int t, int v)
{

	card q;
	q.type = t;
	q.value = v;
	deck.push_back(q);
}

void Player::Add(int t, int v)
{
	card q;
	q.type = t;
	q.value = v;
	hand.push_back(q);
}

void Deck::Print()
{

	for (auto i = deck.begin(); i != deck.end(); ++i)
		cout << i->type << ' ' << i->value << '\n';
}

void Player::Print()
{
	auto i = hand.begin();
	if (is_dealer)
	{
		cout << '?' << ' ';
		i++;
	}
	for (i; i != hand.end(); ++i)
	{
		cout << i->value << ' ' ;
	}
	cout << '\n';
}

void Deck::Shuffle()
{
	srand(time(NULL));
	int s = deck.size();
	int x, y;
	card q;
	for (int i = 1; i < s; ++i)
	{
		x = rand() % s;
		y = rand() % s;
		q = deck[x];
		deck[x] = deck[y];
		deck[y] = q;
	
	}
}

void Deck::Deal_card(Player *h)
{
	h->Add(deck[1].type, deck[1].value);
	
	deck.erase(deck.begin());
};



void Info(Deck* cards, Player* play, Player* deal)
{
	cout << "Player : ";
	play->Print();
	cout << "Dealer : ";
	deal->Print();
}