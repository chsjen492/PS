class Solution {
    public int solution(int[] numbers) {
        int[] num = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int answer=0;
        for(int i=0;i<numbers.length;i++){
            num[numbers[i]]++;
        }
        for(int i=0;i<10;i++){
            if(num[i]==0){
                answer+=i;
            }
        }
        return answer;
    }
}