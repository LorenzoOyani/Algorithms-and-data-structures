class Person(object):
    #  base class of the class hirachy.

    def __init__(self, name, id):
        self.name = name
        self.id = id

    def display(self):
        print(self.name, self.id)


# em = Person("Lorenzo", 1234)
# em.display()


class Emp(Person):
    # child class

    def print(self):
        print("Emp class called")


emp_details = Emp("lorenzo", 193)

emp_details.display()
# calling parent method/ function
emp_details
