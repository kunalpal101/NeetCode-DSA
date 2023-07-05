//Valid Sudoku
//PostFix & PreFix method
//Time Complexity: O(1) : As board size is always fixed
//Space Complexity: O(1)
//Difficulty: Medium

#include<stdio.h>

bool isValidSudoku(char** board, int boardSize, int* boardColSize){
	bool row[boardSize][boardSize];
	bool col[boardSize][boardSize];
	bool sub[boardSize][boardSize];
	
	//Filling the hashmap with false values
	for(int i = 0 ; i<boardSize ; i++){
		for(int j = 0 ; j<boardSize ; j++){
			row[i][j] = false;
			col[i][j] = false;
			sub[i][j] = false;	
		}
		
	}
	
	
	for(int r = 0 ; r<boardSize ; r++){
		for(int c = 0 ; c<boardSize ; c++){
			if(board[r][c] == '.'){
				continue;
			}
			
			
			int boardIndex = board[r][c] - '0' - 1;
			int subIndex = (r/3)*3 + (c/3);
			
			
			if(row[r][boardIndex] || col[c][boardIndex] || sub[subIndex][boardIndex]){
				return false;
			}
			
			row[r][boardIndex] = true;
			col[c][boardIndex] = true;
			sub[subIndex][boardIndex] = true;
		}
	}
	
	return true;
}

int main() {
    // Test Case 1
    char* board1[] = {
        "53..7....",
        "6..195...",
        ".98....6.",
        "8...6...3",
        "4..8.3..1",
        "7...2...6",
        ".6....28.",
        "...419..5",
        "....8..79"
    };
    int boardSize1 = sizeof(board1) / sizeof(board1[0]);
    int boardColSize1 = sizeof(board1[0]) / sizeof(board1[0][0]);
    bool result1 = isValidSudoku(board1, boardSize1, &boardColSize1);
    printf("Test Case 1: %s\n", result1 ? "Valid Sudoku" : "Invalid Sudoku");

    // Test Case 2
    char* board2[] = {
        "53..7....",
        "6..195...",
        ".98....6.",
        "8...6...3",
        "4..8.3..1",
        "7...2...6",
        ".6....28.",
        "...419..5",
        "...9..78."
    };
    int boardSize2 = sizeof(board2) / sizeof(board2[0]);
    int boardColSize2 = sizeof(board2[0]) / sizeof(board2[0][0]);
    bool result2 = isValidSudoku(board2, boardSize2, &boardColSize2);
    printf("Test Case 2: %s\n", result2 ? "Valid Sudoku" : "Invalid Sudoku");

    // Test Case 3
    char* board3[] = {
        "53..7....",
        "6..195...",
        ".98....6.",
        "8...6...3",
        "4..8.3..1",
        "7...2...6",
        ".6....28.",
        "...419...",
        "....8..79"
    };
    int boardSize3 = sizeof(board3) / sizeof(board3[0]);
    int boardColSize3 = sizeof(board3[0]) / sizeof(board3[0][0]);
    bool result3 = isValidSudoku(board3, boardSize3, &boardColSize3);
    printf("Test Case 3: %s\n", result3 ? "Valid Sudoku" : "Invalid Sudoku");

    return 0;
}
