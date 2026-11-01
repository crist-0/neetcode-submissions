class Solution:
    def isValid(self, s: str) -> bool:
        d = []

        open = {'{':0, '[':1, '(':2}
        close = {'}':0, ']':1, ')':2}

        for i in s:
            if i in open:
                d.append(i)
            else:
                if len(d) > 0:
                    op = d.pop()
                    if open[op] != close[i]:
                        return False
                else:
                    return False
        
        return len(d) == 0