class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        Map<Character, Integer> count = new HashMap<>();
        for (char character : s.toCharArray()) {
            count.put(
                character,
                count.getOrDefault(character, 0) + 1
            );
        }

        for (char character : t.toCharArray()) {
           int remaining = count.getOrDefault(character, 0) - 1;
               
                if (remaining < 0) {
                    return false;
                }
                count.put(character, remaining);
        }
        return true;
    }
}