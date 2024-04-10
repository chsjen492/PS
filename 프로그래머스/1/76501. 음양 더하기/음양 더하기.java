class Solution {
    public int solution(int[] absolutes, boolean[] signs) {
        int answer = 0;
        int index=0;
        for(int i:absolutes){
            if(signs[index]==true){
                answer+=i;
            }
            else{
                answer-=i;
            }
            index++;
        }
        return answer;
    }
}