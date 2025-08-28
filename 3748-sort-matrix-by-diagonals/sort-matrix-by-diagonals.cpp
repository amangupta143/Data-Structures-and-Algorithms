class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int size = grid.size();
        
        // for top-right triangle
        for(int c=1; c<size; c++) {
            vector<int> diagElements;
            // get
            int tempR = 0, tempC = c;
            while(tempR < size && tempC < size) {
                diagElements.push_back(grid[tempR++][tempC++]);
            }
            // sort
            sort(diagElements.begin(), diagElements.end());
            // put
            tempR = 0, tempC = c;
            int i = 0;
            while(tempR < size && tempC < size) {
                grid[tempR++][tempC++] = diagElements[i++];
            }
        }

        // for bottom-left triangle
        for(int r=0; r<size; r++) {
            vector<int> diagElements;
            // get
            int tempR = r, tempC = 0;
            while(tempR < size && tempC < size) {
                diagElements.push_back(grid[tempR++][tempC++]);
            }
            // sort
            sort(diagElements.rbegin(), diagElements.rend());
            // put
            tempR = r, tempC = 0;
            int i = 0;
            while(tempR < size && tempC < size) {
                grid[tempR++][tempC++] = diagElements[i++];
            }
        }
        return grid;
    }
};