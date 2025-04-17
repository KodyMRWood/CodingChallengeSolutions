class CountEqualandDivisiblePairsinanArray:
    def countPairs(self, nums: List[int], k: int) -> int:
        if len(nums) == 1:
            return 0

        counter = 0
        for x in range(0, len(nums)):
            for y in range(x+1, len(nums)):
                if nums[x] == nums[y]:
                    if (x*y) % k == 0:
                        counter = counter + 1

        return counter
