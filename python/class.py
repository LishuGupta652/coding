class Lion:
    def __init__(self,name):
        self.name = name
    def printf(self):
        print(f'name is {self.name}')


a = Lion("lishu")
a.printf()