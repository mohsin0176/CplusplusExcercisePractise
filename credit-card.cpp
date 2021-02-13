#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TNode{
struct TNode *next;
string item_name;
 Money price;
};
class CreditCard{
string owner_name;
string number;
struct TNode *transactions;
public:
CreditCard(string o, string n) {owner_name = o; number = n; transactions=0;};
~CreditCard();
void print();
void charge(string item, Money value);
void charge(string item, int euros, int centimes);
};
CreditCard::~CreditCard()
{
while(transactions){
struct TNode *tmp = transactions->next;
delete transactions;
transactions = tmp;
}
}
void CreditCard::print()
{
cout << "Card owned by " << owner_name << endl;
cout << "Number: " << number << endl;
cout << "List of transactions" << endl;
struct TNode *tmp=transactions;
while(tmp){
cout << "Item: " << tmp->item_name << " Price: ";
tmp->price.print();
tmp = tmp->next;
}
cout << "End of transactions list" << endl;
}
void CreditCard::charge(string item, Money value)
{
struct TNode *newt = new TNode;
newt->item_name = item;
newt->price = value;
newt->next = transactions;
transactions = newt;
}
void CreditCard::charge(string item, int euros, int centimes)
{
Money m(euros,centimes);
charge(item,m);
}
//Example program:
int main()
{
CreditCard cb("John Doe","123456");
cb.charge("Pizza",9,99);
cb.charge("Jacket",29,15);
cb.charge("Umbrella",5,23);
cb.print();

return 0;
}
