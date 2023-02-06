class Robot:
    population = 0

    def __init__(self, name):
        self.name = name
        print("initialize{}").format(self.name)

        Robot.population += 1

    def die(self):
        """i'm dying"""
        print("{} is being destroyed!".format(self.name))

        Robot.population -= 1

        if Robot.population == 0:
            print("{} was the last one".format(self.name))
        else:
            print("there are still {:d} robots".format(Robot.population))

    def say_hi(self):
        """greeting by the robot"""

        print("Greetings, my master call me {}".format(self.name))

    @classmethod
    def how_many(cis):
        print("we have {:d} robots.".format(cis.population))
