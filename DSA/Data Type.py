class Solution:
    def dataTypeSize(self, strr):
        # Check the input data type and return its size
        if strr == "Character":
            return 1
        elif strr == "Integer":
            return 4
        elif strr == "Long":
            return 8
        elif strr == "Float":
            return 4
        elif strr == "Double":
            return 8
        else:
            return -1

# Driver Code
if __name__ == '__main__': 
    t = int(input())  # Number of test cases
    for _ in range(t):
        strr = input()  # Input the data type
        ob = Solution()  # Create an object of the Solution class
        res = ob.dataTypeSize(strr)  # Call the dataTypeSize method
        print(res)
        print("~")  # Print "~" after each result
