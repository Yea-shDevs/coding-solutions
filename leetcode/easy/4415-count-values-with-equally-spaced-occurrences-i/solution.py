from collections import defaultdict
class Solution:

  def countSpecialIntegers(self, nums : list[int]) -> int:
    indices = defaultdict(list)
    for i, x in enumerate(nums):
      indices[x].append(i)
    ans = 0
    for pos in indices.values():
      if len(pos) == 3 and (pos[1] - pos[0] == pos[2] - pos[1]):
        ans += 1
    return ans        