def print_values(**kwargs):
    for k, v in kwargs.items():
        print("The value of {} - {}".format(k, v))


print_values(my_name="Lorenzo", your_name="mimi")
