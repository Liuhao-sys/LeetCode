class Solution {
	public:
		bool isValidSudoku(vector<vector<char>>& board) {
			for(int i=0; i<9; i++) {
				unordered_set<char> u;
				for(int j=0; j<9; j++) {
					if(u.find(board[i][j])==u.end()) {
						if(board[i][j]!='.') u.insert(board[i][j]);
					} else return false;
				}
			}

			for(int j=0; j<9; j++) {
				unordered_set<char> u;
				for(int i=0; i<9; i++) {
					if(u.find(board[i][j])==u.end()) {
						if(board[i][j]!='.') u.insert(board[i][j]);
					} else return false;
				}
			}

			for(int i=0; i<9; i+=3) {
				for(int j=0; j<9; j+=3) {
					if(isContain(board,i,j)) return false;
				}
			}
			
			return true;


		}

		bool isContain(vector<vector<char>>& board,int ri,int rj) {
			unordered_set<char> u;
			for(int i=ri; i<ri+3; i++) {
				for(int j=rj; j<rj+3; j++) {
					if(u.find(board[i][j])==u.end()) {
						if(board[i][j]!='.') u.insert(board[i][j]);
					} else return true;
				}
			}
			return false;
		}
};
