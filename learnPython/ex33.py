numbers = []
def func(x,y):
    i = 0
    while i < x:
        print(f"At the top i is {i}")
        numbers.append(i)

        i = i + y
        print("Numbers now: ", numbers)
        print(f"At the bottom i is {i}")


print("The numbers: ")
func(99,2)
for num in numbers:
    print(num)
