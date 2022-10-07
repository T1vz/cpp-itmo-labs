#include <iostream>
#include <string>

using namespace std;

int shot(double rangeX, double rangeY) { //shot (first variant of target)
	double hindranceX, hindranceY, x, y;
	int score = 0;

	cout << "Enter X coordinate of your aim: ";
	cin >> x;
	cout << "Enter Y coordinate of your aim: ";
	cin >> y;

	hindranceX = rand() % 5 - 2; // random hindrance
	hindranceY = rand() % 5 - 2;
	x += hindranceX;
	y += hindranceY;

	if (pow(x - rangeX, 2) + pow(y - rangeY, 2) <= 4) { // based on circle formula
		score += 5;
		if (pow(x - rangeX, 2) + pow(y - rangeY, 2) <= 1) { // sniper shot
			score += 5;
		}
		cout << "NICE SHOT! +" << score << endl;
	}
	else {
		cout << "Miss :(" << endl;
	}
	return score;
}

int shootingNTimes(int n, double rangeX, double rangeY) { // task with n shots
	int score = 0;

	for (int i = 0; i < n; i++)
	{
		score += shot(rangeX, rangeY);
	}
	return score;
}

int shooting(int maxScore, double rangeX, double rangeY) { // shooting until you get maxScore scores
	int score = 0;
	int shotCounter = 0;

	while (score < maxScore)
	{
		shotCounter += 1;
		score += shot(rangeX, rangeY);
	}
	return shotCounter;
}

string getRank(int score, int shootCount) { // get rank based on count of your shots
	int coef = score / 10; // special coef for getting rank
	if (shootCount <= coef) {
		return "Expert";
	}
	if (shootCount <= coef * 2) {
		return "Master";
	}
	if (shootCount <= coef * 3) {
		return "Enjoyer";
	}
	return "Newbie";
}

int main()
{
	double rangeX, rangeY; // target coords
	rangeX = rand() % 21 - 10;
	rangeY = rand() % 21 - 10;

	int n;
	cout << "Shooting N times" << endl << "Enter N: ";
	cin >> n;
	int score = shootingNTimes(n, rangeX, rangeY);
	cout << "Your score: " << score << endl;

	score = 50;
	n = shooting(score, rangeX, rangeY);
	cout << "You got "<< score <<" scores with " << n << " shoots!" << endl << "Your rank: " << getRank(score, n);

	return 0;
}