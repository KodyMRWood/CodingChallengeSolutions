class CountandSay:
    def countAndSay(self, n: int) -> str:
        result = "1"
        for _ in range(n - 1):
            result = self.describe(result)
        return result

    def describe(self, s: str) -> str:
        result = []
        counterLetters = 1

        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                counterLetters += 1
            else:
                result.append(f"{counterLetters}{s[i - 1]}")
                counterLetters = 1

        result.append(f"{counterLetters}{s[-1]}")
        return "".join(result)



