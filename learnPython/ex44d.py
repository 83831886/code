# 定义类Parent
class Parent(object):
# 定义类Parent的override方法
    def override(self):
        print("PARENT override()")
# 定义类Parent的implicit方法
    def implicit(self):
        print("PARENT implicit()")
# 定义类Parent的altered方法
    def altered(self):
        print("PARENT altered()")
#定义Parent类的子类Child
class Child(Parent):
#定义类Child的override方法，覆盖父类的override方法
    def override(self):
        print("CHILD override()")
#定义类Child的altered方法，覆盖父类的altered方法
    def altered(self):
        print("CHILD, BEFORE PARENT altered()")
        #调用Child类的父类Parent的altered方法
        super(Child, self).altered()
        print("CHILD, AFTER PARENT altered()")

dad = Parent()
son = Child()

dad.implicit()
son.implicit()

dad.override()
son.override()

dad.altered()
son.altered()

