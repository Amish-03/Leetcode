class Solution(object):
    def interpret(self, command):
        """
        :type command: str
        :rtype: str
        """
        ans=""
        for i in range(len(command)):
            if command[i]=="G":
                ans+="G"
            elif command[i]=="(" and command[i+1]==")":
                ans+="o"
                i=i+2
            elif command[i]=="(" and command[i+1]=="a":
                ans+="al"
                i=i+4
        return ans
        