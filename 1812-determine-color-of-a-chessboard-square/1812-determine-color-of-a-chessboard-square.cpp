class Solution {
public:
    bool squareIsWhite(string coordinates) {

           int col=coordinates[0]-'a'+1;
           int row=coordinates[1]-'0';
           bool isBlack = false;
           bool isWhite = true;

           if((row+col)%2==0)
           return isBlack;

           else
           return isWhite;
    }
};