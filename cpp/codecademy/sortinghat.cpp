#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

const string houses[4] = {"Gryffindor", "Hufflepuff", "Ravenclaw", "Slytherin"};

static void invalid_input()
{
    cout << "\nInvalid input. Try again!\n\n";
}

static void ask_question(const int num, const string question, const vector<string> options, const char appendage)
{
    cout << "Q" << num << ") " << question << appendage << " \n\n";

    for (int i = 0; i < options.size(); i++)
    {
        cout << "  " << i + 1 << ") " << options[i] << "\n";
    }
    cout << "\n";
}

static void find_largest(const vector<int> &nums, int &largest, int &index)
{
    largest = nums[0];
    index = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
            index = i;
        }
    }
}

class Hat
{

public:
    vector<int> housescore = {0, 0, 0, 0};
    vector<int> answers = {0, 0, 0, 0};

    Hat()
    {
        const vector<string> questions = {"When I'm dead, I want people to remember me as", "Dawn or Dusk", "Which instrument most pleases your ear", "Which road tempts you most"};
        vector<vector<string>> options = {{"The Good", "The Great", "The Wise", "The Bold"}, {"Dawn", "Dusk"}, {"The violin", "The trumpet", "The piano", "The drum"}, {"The wide, sunny grassy lane", "The narrow, dark, lantern-lit alley", "The twisting, leaf-strewn path through woods", "The cobbled street lined (ancient buildings)"}};

        for (int i = 0; i < 4; i++)
        {
            char appendage = '?';
            if (i == 0)
            {
                appendage = ':';
            }
            bool valid = false;
            do
            {
                ask_question(i + 1, questions[i], options[i], appendage);
                valid = choice(options[i].size(), i + 1);
            } while (!valid);
        }

        int largest = 0;
        int index = 0;

        find_largest(housescore, largest, index);

        cout << houses[index] << "!" << "\n\n";
    }

private:
    void update_score(const int answer, const int max = 4)
    {
        if (max == 2)
        {
            if (answer < 3)
            {
                housescore[0] += 1;
            }
            else
            {
                housescore[1] += 1;
            }
        }
        housescore[answer - 1] += 1;
    }

    // Default i to 0 as most times it is not required
    bool choice(const int max = 4, const int i = 0)
    {
        int answer;
        cout << "Choose an option: ";
        cin >> answer;

        if (answer > max || answer < 1)
        {
            invalid_input();
            return false;
        }
        else
        {
            if (i == 3)
            {
                switch (answer)
                {
                case 1:
                    answer = 4;
                    break;
                case 2:
                    answer = 2;
                    break;
                case 3:
                    answer = 3;
                    break;
                case 4:
                    answer = 1;
                    break;
                default:
                    invalid_input();
                    return false;
                }
            }
            else if (i == 4)
            {
                switch (answer)
                {
                case 1:
                    answer = 2;
                    break;
                case 2:
                    answer = 4;
                    break;
                case 3:
                    answer = 1;
                    break;
                case 4:
                    answer = 3;
                    break;
                default:
                    invalid_input();
                    return false;
                }
            }

            update_score(answer, max);
        }
        cout << "\n";
        return true;
    }
};

int main()
{
    cout << "\n\nThe Sorting Hat Quiz!\n\n";

    Hat hat;
}