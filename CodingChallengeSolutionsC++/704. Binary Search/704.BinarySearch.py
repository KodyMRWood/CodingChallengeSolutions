class BinarySearch:
    def search(self, nums: List[int], target: int) -> int:
        min = 0
        max = 0

        while min <= max:
            current = math.ceil((min + max) / 2)
            if nums[current] == target:
                return current
            elif target < nums[current]:
                max = current - 1
            elif target > nums[current]:
                min = current + 1
        return -1
            