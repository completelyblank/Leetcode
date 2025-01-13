import random

class RandomizedSet:
    def __init__(self):
        """
        Initialize the data structure.
        """
        self.data = {}  # A dictionary to store values and their indices
        self.elements = []  # A list to store the values for O(1) random access

    def insert(self, val):
        """
        Insert an item val into the set if not present.
        :type val: int
        :rtype: bool
        """
        if val in self.data:
            return False  # Value already present
        self.data[val] = len(self.elements)
        self.elements.append(val)
        return True

    def remove(self, val):
        """
        Remove an item val from the set if present.
        :type val: int
        :rtype: bool
        """
        if val not in self.data:
            return False  # Value not present
            
        last_element = self.elements[-1] # Swap the element to remove with the last element
        index_to_remove = self.data[val]
        self.elements[index_to_remove] = last_element
        self.data[last_element] = index_to_remove
        self.elements.pop() # Remove the last element
        del self.data[val]
        return True

    def getRandom(self):
        """
        Get a random element from the set.
        :rtype: int
        """
        return random.choice(self.elements)

# Example usage:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
