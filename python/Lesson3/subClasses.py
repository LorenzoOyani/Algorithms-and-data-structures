class Base(object):
    pass  # empty class


class Derived (Base):
    pass  # empty classes


print(issubclass(Derived, Base))
print(issubclass(Base, Derived))

d = Derived()
b = Base()

print(isinstance(b, Derived))
print(isinstance(d, Base))
