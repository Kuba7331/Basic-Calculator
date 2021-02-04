

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Reader {
public:
	double word = 1;
	double sentenceNoSpace, average;
	double space = 0;
	string sentence;

	string getSentence() {
		return sentence;
}
	void setSentence(string sentence) {
		this->sentence = sentence;
	}
	int getWord() {
		return word;
	}
	void setWord(int word) {
		this->word = word;
	}
	int getSpace() {
		return space;
	}
	void setSpace(int space) {
		this->space = space;
	}

private:
	int readSentence() {
		for (int i = 0; i <= getSentence().length(); i++) {
			if (getSentence()[i] == ' ') {
				++word;
			}
			if (++i == getSentence().length() && (getSentence()[i] == ' ')) {
				--word;
			}
		}

		setWord(word);
		return word;
	}
	int calculateSpace() {
		for (int x = 0; x <= getSentence().length(); x++) {
		    if(getSentence()[x] == ' '){
				space++;
			}
		}
		setSpace(space);
		return space;
	}
public:
	double returnAllInformationAboutSentence() {
		readSentence();
		calculateSpace();
		sentenceNoSpace = getSentence().length() - getSpace();
		cout << "SLOWA: " << sentenceNoSpace << endl;
		cout << "SPACJA: " << getSpace() << endl;
		cout <<"ILOSC znakow W ZDANIU: "<<getSentence().length()<< endl;
		average = sentenceNoSpace / getWord();
		return average;
	}
};




int main()
{
	Reader r;
	string sentence;
	cout << "Prosze podac zdanie: " << endl;
	getline(cin, sentence);
	while (true) {
		if (cin.fail()) {
			cout << "Wystapil blad przy pobieraniu zdania, prosze podac zdanie ponownie!" << endl;
			getline(cin, sentence);
			if (cin.fail()) {
				system("cls");
				continue;
			}
		}
		else {
			break;
		}
	}
	r.setSentence(sentence);
	cout << "Srednia ilosc slow w zdaniu: " <<setprecision(1)<< r.returnAllInformationAboutSentence()<< endl;;
}


