import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        String[] arr = String.valueOf(n).split("");
        Arrays.sort(arr, Collections.reverseOrder());
        String s="";
        for(int i=0;i<arr.length;i++){
            s+=arr[i];
        }
        answer = Long.parseLong(s);
        
        return answer;
    }
}