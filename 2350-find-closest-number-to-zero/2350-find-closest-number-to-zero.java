public class Solution {
    public int findClosestNumber(int[] nums) {
        int mini = Integer.MAX_VALUE;
        Map<Integer, Integer> mp = new HashMap<>();
        
        for (int num : nums) {
            mp.put(num, Math.abs(num));
            mini = Math.min(mini, Math.abs(num));
        }
        
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            if (entry.getValue() == mini) {
                if (mp.containsKey(Math.abs(mini))) return Math.abs(entry.getKey());
                return entry.getKey();
            }
        }
        
        return -1;
    }
}
