// The guess API is already defined.
// int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 0;
        int end = n;
       
       

        while(start<=end){
            int mid = start + (end - start)/2;

           int ans = guess(mid);
           if(ans == 0){
              return mid;
           }
           else if(ans == -1){
            end = mid - 1;
           }
           else{
            start = mid + 1;
           }
        }
        return -1;
    }
};
