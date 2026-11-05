//ALGORITHM ProcessElectionResults
//BEGIN
// 1.) Map candidate IDs (1 to 5) to their respective names in a structured lookup table.
// 2.) Populate a vote collection array of size 100 with randomized voter selections.
// 3.) Execute an Insertion Sort algorithm to sequence the vote list in ascending order.
// 4.) Pass the sorted collection to a processing function to calculate tallies per candidate ID.
// 5.) Evaluate the tallies within the collection loop to identify the leading candidate ID.
// 6.) Output the formatted vote log, full candidate tally report, and official declared winner.
//END

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

const int TOTAL_VOTES = 100;
const int NUM_CANDIDATES = 5;

void fillVotes(int votes[], int size);
void insertionSort(int arr[], int size);
void printVotes(const int votes[], int size);
void processResults(const int votes[], int size, const std::string candidates[]);

int main() {
    int voteList[TOTAL_VOTES];
    std::string candidates[NUM_CANDIDATES + 1] = {
        "",
        "Clint Hoven",
        "Eunice Marcelo",
        "Sophia Chen",
        "Bethoven Bolo",
        "Mian Xieu"
    };

    srand(static_cast<unsigned int>(time(0)));

    fillVotes(voteList, TOTAL_VOTES);
    insertionSort(voteList, TOTAL_VOTES);

    std::cout << "--- Sorted Vote Registry ---\n";
    printVotes(voteList, TOTAL_VOTES);

    processResults(voteList, TOTAL_VOTES, candidates);

    return 0;
}

void fillVotes(int votes[], int size) {
    for (int i = 0; i < size; i++) {
        votes[i] = (rand() % NUM_CANDIDATES) + 1;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printVotes(const int votes[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << votes[i] << " ";
        if ((i + 1) % 20 == 0) {
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}

void processResults(const int votes[], int size, const std::string candidates[]) {
    int tallies[NUM_CANDIDATES + 1] = {0};

    for (int i = 0; i < size; i++) {
        tallies[votes[i]]++;
    }

    int winnerID = 1;
    int maxVotes = tallies[1];

    std::cout << "--- Final Vote Tallies ---\n";
    for (int c = 1; c <= NUM_CANDIDATES; c++) {
        std::cout << "[" << c << "] " << candidates[c] 
                  << " : " << tallies[c] << " votes\n";

        if (tallies[c] > maxVotes) {
            maxVotes = tallies[c];
            winnerID = c;
        }
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "WINNER: " << candidates[winnerID] 
              << " with " << maxVotes << " total votes!" << std::endl;
    std::cout << "==========================================" << std::endl;
}