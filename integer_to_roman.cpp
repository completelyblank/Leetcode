class Solution {
public:
    string intToRoman(int num) {
        string result = ""; // To store the Roman numeral
        
        // Process thousands place
        int thousands = num / 1000;
        for (int i = 0; i < thousands; i++) 
        {
            result += "M";
        }
        num %= 1000;

        // Process hundreds place
        int hundreds = num / 100;
        if (hundreds == 9) 
        {
            result += "CM";
        }
        else if (hundreds >= 5) 
        {
            result += "D";
            for (int i = 0; i < hundreds - 5; i++) 
            {
                result += "C";
            }
        }
        else if (hundreds == 4) result += "CD";
        else 
        {
            for (int i = 0; i < hundreds; i++)
            { 
                result += "C";
            }
        }
        num %= 100;

        // Process tens place
        int tens = num / 10;
        if (tens == 9) 
        {
            result += "XC";
        }
        else if (tens >= 5) 
        {
            result += "L";
            for (int i = 0; i < tens - 5; i++)
            { 
                result += "X";
            }
        }
        else if (tens == 4)
        {
            result += "XL";
        }
        else 
        {
            for (int i = 0; i < tens; i++)
             {
                result += "X";
             }
        }
        num %= 10;

        // Process units place
        int units = num;
        if (units == 9) 
        {
            result += "IX";
        }
        else if (units >= 5) 
        {
            result += "V";
            for (int i = 0; i < units - 5; i++)
            {
                result += "I";
            }
        }
        else if (units == 4) 
        {
            result += "IV";
        }
        else 
        {
            for (int i = 0; i < units; i++) 
            {
                result += "I";
            }
        }

        return result;
    }
};
