#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int col=1, rows = matrix.size(), columns = matrix[0].size();
    
    //we will be using the first row and first column as our dummy array to store zeros
    for(int i=0; i<rows; i++){
        //If we find zero in the first column we don't change the matrix[0][0] to 0 as it affects both the row and column
        if(matrix[i][0]==0) col=0;
        //We start traversing from the second column
        for(int j=1; j<columns; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=matrix[0][j]=0;
            }
        }
    }
    
    //Start setting zeros in rows and columns from the end
    for(int i=rows-1; i>=0; i--){
        for(int j=columns-1; j>=1; j--){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
        if(col==0){
            matrix[i][0]=0;
        }
    }
}
