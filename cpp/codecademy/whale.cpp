#include <iostream>
 
using std::string;
using std::cout;

// Declare vowels and repeats, and figure it out at compile time as they will never change
constexpr char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

static bool is_vowel(char &letter) {
  bool is = false;
  int i = 0;

  do {
    char vowel = vowels[i]; 
    if (letter == vowel) {
      is = true;
    }
    i++;
  } while (i < 5 && !is);

  return is;
}

int main() {
  const string str = "hi, human";

  string result = "";

  for (int i = 0; i < str.size(); i++) {
    char letter = str.at(i);
    if (is_vowel(letter)) {
      if (letter == 'e' || letter == 'u') {
        result += letter;
      }
      result += letter;
    }
  }
  
  cout << result << "\n";
}
