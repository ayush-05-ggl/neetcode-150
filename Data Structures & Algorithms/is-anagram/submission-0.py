class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False   
        count = {}

        for character in s:
            count[character] = count.get(character, 0) + 1
        for character in t:
            count[character] = count.get(character, 0) - 1

            if count[character] < 0:
                return False
        return True
