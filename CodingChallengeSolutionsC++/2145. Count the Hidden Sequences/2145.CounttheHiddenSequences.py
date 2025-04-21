class CounttheHiddenSequences:
    def numberOfArrays(self, differences: List[int], lower: int, upper: int) -> int:
        presum = 0
        minval = 0
        maxval = 0

        for x in differences:
            presum += x
            minval = min(minval, presum)
            maxval = max(maxval, presum)
    
        return max(0, (upper-lower+1) - (maxval - minval))



