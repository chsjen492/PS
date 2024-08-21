class Solution {
    public int solution(int n) {
        int answer = 0;
        int i=1;
        while(true){
            if((i*6)%n==0){
                answer=i;
                break;
            }
            i++;
        }
        return answer;
    }
}