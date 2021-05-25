class Heap:
    @classmethod
    def push(cls, iterable, val):
        iterable.append(val)
        Heap._bubble_up(iterable, 0, len(iterable) - 1)

    @classmethod
    def pop(cls, iterable):
        last_item = iterable.pop()
        res = iterable[0]
        iterable[0] = last_item
        Heap._bubble_to_bottom(iterable)
        return res

    @classmethod
    def _bubble_to_bottom(cls, iterable, start=0):
        end_index = len(iterable)
        current_index = start
        out_of_place_item = iterable[current_index]
        child_index = (2 * current_index) + 1
        while child_index < end_index:
            right_child_index = (2 * current_index) + 2
            if right_child_index < end_index and iterable[right_child_index] <= iterable[child_index]:
                child_index = right_child_index

            iterable[current_index] = iterable[child_index]
            current_index = child_index
            child_index = (2 * current_index) + 1

        iterable[current_index] = out_of_place_item
        Heap._bubble_up(iterable, start, current_index)

    @classmethod
    def heapify(cls, iterable):
        for i in range((len(iterable) // 2) - 1, -1, -1):
            Heap._bubble_to_bottom(iterable, i)

    @classmethod
    def _bubble_up(cls, iterable, stop, start):
        current_index = start
        new_item = iterable[current_index]
        while current_index > stop:
            parent_index = (current_index - 1) >> 1
            if new_item < iterable[parent_index]:
                iterable[current_index] = iterable[parent_index]
                current_index = parent_index
                continue

            break

        iterable[current_index] = new_item


a = []
Heap.push(a, 7)
Heap.push(a, 4)
Heap.push(a, 1)
Heap.push(a, 3)
print("Heap : {}".format(a))

print("Heap pop : {}".format(Heap.pop(a)))
print("Heap pop : {}".format(Heap.pop(a)))
print("Heap : {}".format(a))