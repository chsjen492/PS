class Solution {
    public String solution(String my_string) {
        String answer = "";
        for(int i=0;i<my_string.length();i++){
            char cur = my_string.charAt(i);
            if(cur!='a'&&cur!='e'&&cur!='i'&&cur!='o'&&cur!='u')
                answer+=cur;
        }
        return answer;
    }
}