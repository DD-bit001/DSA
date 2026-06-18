class Solution {
public:
    double angleClock(int hour, int minutes) {
        int t=hour;
        if (hour==12) {
  t=0;
        }
        float deg= 6*minutes;
        float deg2= 0.5*minutes+t*30;
        float ans=abs(deg2-deg);
    return min(ans,360-ans);

        
    }
};