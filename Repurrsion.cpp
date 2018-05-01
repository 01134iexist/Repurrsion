#include <iostream>
#include <string>
using namespace std;

void Repurrsion(int reply);
int main() {
	cout << "How many cats?" << endl;
	int userReply;
	cin >> userReply;
	Repurrsion(userReply);
}
void Repurrsion (int reply) {
	for (int count  = 0; count < reply; count++) 
	{
		cout << "Meow meow meow" << endl;
		cout << "=^oo^=" << endl;
	}
	cout << "More kitties? Y or N" << endl;
	char userResponse;
	cin >> userResponse;
	if (toupper(userResponse) == 'Y') 
	{
		cout << "How many cats?" << endl;
		int userReply;
		cin >> userReply;
		Repurrsion(userReply);
	}
	else
	{
		cout << "Why not?? D: ?!?" << endl;
		Repurrsion(1);
	}

}
