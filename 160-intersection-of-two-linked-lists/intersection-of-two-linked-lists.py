# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if headA == None or headB == None:
          return None

        stackA = list()
        stackB = list()
        ptr = None
        while headA is not None:
          stackA.append(headA)
          headA = headA.next
        while headB is not None:
          stackB.append(headB)
          headB = headB.next

        while len(stackA) > 0 and len(stackB) > 0 and stackA[-1] == stackB[-1]:
          ptr = stackA[-1]
          stackA.pop()
          stackB.pop()

        return ptr
