class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        s=[]
        for i in range(9):
            for j in range(9):
                if board[i][j]!='.':
                    s+=[(i,board[i][j]),(board[i][j],j),(i//3,j//3,board[i][j])]
        
        if len(s)==len(set(s)):
            return 1
        return 0
