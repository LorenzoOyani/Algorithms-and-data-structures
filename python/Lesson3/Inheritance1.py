class Person(object):
    def __init__(self, name) -> None:
        self.name = name

    def getName(self):
        return self.name

    def isEmployed(self):
        return False


class Employee(Person):

    def isEmployee(self):
        return True


emp = Person("Lorenzo")
print(emp.getName(), emp.isEmployed())

emp = Employee("james")
print(emp.getName(), emp.isEmployee())
