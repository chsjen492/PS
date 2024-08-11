class Solution {
    public int solution(int[] box, int n) {
        int answer = box[0]/n;
        for(int i=1;i<box.length;i++){
            answer*=box[i]/n;
        }
        return answer;
    }
}