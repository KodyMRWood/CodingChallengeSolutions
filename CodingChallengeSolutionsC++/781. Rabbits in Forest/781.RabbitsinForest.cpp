
#include<vector>
#include<map>

class RabbitsinForest {
public:
    int numRabbits(std::vector<int>& answers) {
        std::map<int, int> unique;
        int rabbits = 0;
        for (int x = 0; x < answers.size(); ++x)
        {
            unique[answers[x]]++;
        }

        for (auto& entry : unique)
        {
            rabbits += ceil((double)entry.second / (entry.first + 1)) * (entry.first + 1);
        }
        return rabbits;
    }
};