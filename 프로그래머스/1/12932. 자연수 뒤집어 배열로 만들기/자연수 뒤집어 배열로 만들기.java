class Solution {
    public long[] solution(long n) {
        String s = String.valueOf(n);
        long[] answer = new long [s.length()];
        int i=0;
        while(n>=10){
            answer[i]=n%10;
            n/=10;
            i++;
        }
        answer[i]=n;
        return answer;
    }
}