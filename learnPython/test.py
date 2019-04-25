class bike(object):

    def __init__(self, color):
        self.color = color

class subbike(bike):

    def __init__(self, cc):
        self.cc = cc

b = bike('yellow')
c = subbike(b)
print(c.cc)
