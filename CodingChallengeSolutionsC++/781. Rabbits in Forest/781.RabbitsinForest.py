class RabbitsinForest:
    def numRabbits(self, answers: List[int]) -> int:
        unique = {}
        rabbits = 0
        for x in answers:
            if x in unique:
                unique[x] = unique[x] + 1
            else:
                unique[x] = 1

        for key, value in unique.items():
            rabbits += math.ceil(value / (key +1)) * (key+1)
        return rabbits
        