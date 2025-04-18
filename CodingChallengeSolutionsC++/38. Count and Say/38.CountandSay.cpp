#include <string>
class CountandSay {
public:
    std::string countAndSay(int n) {
        std::string result = "1";

        for (int itr = 1; itr < n; ++itr)
        {
            std::string newRLE = "";
            int counterLetters = 1;

            for (int x = 1; x < result.size(); ++x)
            {
                if (result[x] == result[x - 1])
                {
                    ++counterLetters;
                }
                else
                {
                    newRLE += std::to_string(counterLetters) + result[x - 1];
                    counterLetters = 1;
                }
            }
            newRLE += std::to_string(counterLetters) + result.back();
            result = newRLE;
        }

        return result;
    }
};