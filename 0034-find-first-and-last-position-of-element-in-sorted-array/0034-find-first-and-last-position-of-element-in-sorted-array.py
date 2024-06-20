class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        front=0
        rear=len(nums)-1

        while front<=rear:
            if nums[front]!=target:
                front+=1
            elif nums[rear]!=target:
                rear-=1
            else:
                break

        if front>rear:
            return [-1,-1]

        return [front,rear]


        