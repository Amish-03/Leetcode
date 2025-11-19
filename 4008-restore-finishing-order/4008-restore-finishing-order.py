class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        output =[]
        for person in order:
            if person in friends:
                output.append(person)

        return output