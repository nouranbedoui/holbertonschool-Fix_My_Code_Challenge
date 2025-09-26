#!/usr/bin/python3
"""User class for the Fix My Code Challenge."""

class User:
    """Minimal User class."""

    def __init__(self, first_name="", last_name="", password=""):
        self.first_name = first_name
        self.last_name = last_name
        self.password = password

    def is_valid_password(self, pwd):
        """Return True if pwd matches the stored password, else False."""
        return pwd == self.password


# No top-level prints or tests here!
if __name__ == "__main__":
    # Optional: simple demo (won't be run by checker if imported)
    u = User("Test", "User", "root")
    print(u.is_valid_password("root"))  # True
