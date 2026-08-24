class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Base case 1: Agar 0 rows chahiye, toh khali (empty) array return karo
        if (numRows == 0) return {};
        
        // Base case 2: Agar 1 row chahiye, toh sirf pehla element [1] return karo
        if (numRows == 1) return {{1}};
        
        // Recursive call: Pichli saari rows (numRows - 1) calculate karke le aao
        vector<vector<int>> prevRows = generate(numRows - 1);
        
        // Nayi row banao jiska size 'numRows' ho, aur sabme default '1' bhar do 
        // (kyunki start aur end hamesha 1 hote hain)
        vector<int> newRow(numRows, 1);
        
        // Beech ke elements calculate karo (pehle aur aakhri index ko chhodkar)
        for (int i = 1; i < numRows - 1; i++) {
            // Naya element = upar wali row ke do adjacent elements ka sum
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }
        
        // Nayi calculate ki hui row ko pichli rows ke end mein jod do
        prevRows.push_back(newRow);
        
        // Final result return karo
        return prevRows;
    }
};
