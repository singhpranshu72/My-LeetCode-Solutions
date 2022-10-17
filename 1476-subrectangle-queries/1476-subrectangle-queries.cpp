class SubrectangleQueries {
public:
    vector<vector<int>>v;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
       v=rectangle;  
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
         for(int r = row1; r <= row2; r++) {
            for(int c = col1; c <= col2; c++ ) {
                v[r][c] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return v[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */