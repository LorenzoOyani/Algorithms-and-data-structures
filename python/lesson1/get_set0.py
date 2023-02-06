class Robot:
    def __init__(self, name=None, buildYear=None):
        self.name = name
        self.buildYear = buildYear

    def say_hi(self):
        if self.name:
            print("Hi, i am " + self.name)
        else:
            print("sorry I am a Robot")
        if self.buildYear:
            print("I was built in " + str(self.buildYear))
        else:
            print("I dont knw when I was built")

    def set_name(self, name):
        self.name = name

    def get_name(self):
        return self.name

    def set_buildYear(self, by):
        self.buildYear = by

    def get_buildYear(self):
        return self.buildYear


x = Robot("Lorenzo", 2008)
y = Robot()
y.set_name('john')
x.say_hi()
y.say_hi()
