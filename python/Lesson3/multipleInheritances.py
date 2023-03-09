class Person(object):
    def __init__(self, name, idnumber) -> None:
        self.name = name
        self.idnumber = idnumber


class Employee(Person):
    def __init__(self, salary, post) -> None:
        self.salary = salary
        self.post = post


class Leader(Person, Employee):
    def __init__(self, name, idnumber, salary, post, points) -> None:
        self.points = points
        Person.__init__(self, name, idnumber)
        Employee.__init__(self, salary, post)
        print(self.salary)
