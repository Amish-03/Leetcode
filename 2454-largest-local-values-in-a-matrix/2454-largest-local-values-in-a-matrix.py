class Solution(object):
    def largestLocal(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[List[int]]
        """
        n=len(grid)
        result=[]
        for i in range(1,n-1):
            row=[]
            for j in range(1,n-1):
                # Extract the 3x3 window
                max_val = max([
                    grid[i-1][j-1], grid[i-1][j], grid[i-1][j+1],
                    grid[i][j-1],   grid[i][j],   grid[i][j+1],
                    grid[i+1][j-1], grid[i+1][j], grid[i+1][j+1]
                ])
                row.append(max_val)
            result.append(row)
        return result
        

        