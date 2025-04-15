class Solution(object):
    def countGoodTriplets(self, arr, a, b, c):
        counter = 0
        for x in range(len(arr)-2):
            for y in range(x+1,len(arr)-1):
                for z in range(y+1,len(arr)):
                    if abs(arr[x]-arr[y]) <= a and abs(arr[y]-arr[z]) <= b and abs(arr[x]-arr[z]) <= c:
                        counter+=1
        return counter




