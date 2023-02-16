class Integer:
    i = 0

    def __init__(self, i):
        self.i = i

    def plus(self, x):
        sum = Integer(0)
        sum.i = self.i + x.i
        return sum
    
    def get(self):
        return self.i
    

a = Integer(10)
b = Integer(20)
c = a.plus(b)
print(f"c = {c.get()}")