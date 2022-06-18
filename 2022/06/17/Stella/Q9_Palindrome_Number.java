class Solution{
    public boolean isPalindrome(int x) {
        
        if(x<0)return false;
        for(int i=0; i<String.valueOf(x).length();i++){
            if(String.valueOf(x).charAt(i)!=String.valueOf(x).charAt(String.valueOf(x).length()-i-1)){
                 return false;
            }

        }
        return true;
    }
}
