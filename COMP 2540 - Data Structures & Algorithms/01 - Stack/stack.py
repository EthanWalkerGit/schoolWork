class Empty(Exception):
    pass


class ArrayStack:

    def __init__(self):
        """Create the empty stack"""
        self._data = []

    def __len__(self):
        """Return the number of elements in the stack"""
        return len(self._data)

    def is_empty(self):
        """Return true if the stack is empty"""
        return len(self._data) == 0

    def push(self, e):
        """Add element e to the top of the stack"""
        self._data.append(e)

    def top(self):
        if self.is_empty():
            raise Empty('Stack is empty')
        return self._data[-1]

    def pop(self):
        if self.is_empty():
            raise Empty('Stack is empty')
        return self._data.pop()
