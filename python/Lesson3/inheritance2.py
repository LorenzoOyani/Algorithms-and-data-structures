class Person(object):

    def __init__(self, name, idnumber) -> None:
        self.name = name
        self.idnumber = idnumber

    def display(self):
        print(self.name)
        print(self.idnumber)


class Employee(Person):

    def __init__(self, name, idnumber, salary, posts) -> None:
        # super.__init__(self, name, idnumber)
        self.salary = salary
        self.idnumber = idnumber

        Person.__init__(self, name, idnumber)


a = Employee("Lorenzo", 80006, 200000, "backend")
a.display()
