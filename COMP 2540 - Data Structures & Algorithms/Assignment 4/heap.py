class Heap:
    def __init__(self):
        self.heap = []

    def insert(self, item):
        self.heap.append(item)
        self._sift_up(len(self.heap) - 1)

    def removeMin(self):
        if self.isEmpty():
            raise IndexError("Heap is empty")
        self._swap(0, len(self.heap) - 1)
        min_value = self.heap.pop()
        self._sift_down(0)
        return min_value

    def min(self):
        if self.isEmpty():
            raise IndexError("Heap is empty")
        return self.heap[0]

    def size(self):
        return len(self.heap)

    def isEmpty(self):
        return len(self.heap) == 0
    
    def printHeap(self):
        print(self.heap)