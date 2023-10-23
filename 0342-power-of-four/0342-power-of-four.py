class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n<=0:
            return False
        result = math.log(n, 4)
        if result.is_integer():
            return True
        return False
        