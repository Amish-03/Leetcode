class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        parts=address.split(".")

        return "[.]".join(parts)       