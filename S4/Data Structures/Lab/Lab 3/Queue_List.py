class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self):
        while True:

            x = int(input("Press 1 to Insert or any other Key to Exit : "))
            if x == 1:
                x = int(input("Enter the Element to Insert : "))
                self.queue.append(x)
            else:
                return

    def dequeue(self):
        while True:
            x = int(input("Press 1 to Delete or any other Key to Exit : "))
            if x == 1:
                if len(self.queue) == 0:
                    print("The Queue is Empty")
                    return
                else:
                    self.queue.pop(0)
            else:
                return

    def display(self):
        if len(self.queue) == 0:
            print("Display : The Queue is Empty")
            return
        else:
            print("Queue is : {}".format(self.queue))

    def front(self):
        if len(self.queue) == 0:
            print("Front : The Queue is Empty")
            return
        else:
            print("Queue front : {}".format(self.queue[0]))

    def rear(self):
        if len(self.queue) == 0:
            print("Rear : The Queue is Empty")
            return
        else:
            print("Queue Rear : {}".format(self.queue[len(self.queue)-1]))

    def size(self):
        print("The Size of Queue is {}".format(len(self.queue)))

    def isempty(self):
        if len(self.queue) == 0:
            print("The Queue is Empty")
        else:
            print("The Queue is Not Empty")

if __name__ == '__main__':

    queue = Queue()
    queue.enqueue()
    queue.size()
    queue.front()
    queue.rear()
    queue.display()
    queue.dequeue()
    queue.size()
    queue.front()
    queue.rear()
    queue.isempty()
    queue.display()
