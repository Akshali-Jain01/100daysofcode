def uniquePathsWithObstacles(self, obstacleGrid: list[list[int]]) -> int:
    m = len(obstacleGrid)
    n = len(obstacleGrid[0])
    dp = [[0]*(n+1)] * (m+1)
    for i in range(1, m+1):
        for j in range(1, n+1):
            if(i == 1 and j == 1):
                if(obstacleGrid[i-1][j-1]):
                    dp[i][j] = 0
                else:
                    dp[i][j] = 1
            else:
                if(obstacleGrid[i-1][j-1]):
                    dp[i][j] = 0
                else:
                    dp[i][j] = dp[i-1][j] + dp[i][j-1]
    return dp[m][n]