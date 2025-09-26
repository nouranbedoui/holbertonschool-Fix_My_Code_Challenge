#!/usr/bin/env python3
# User class with password validation

class User:
    def __init__(self, name, password):
        self.name = name
        self.password = password

    def is_valid_password(self, pwd):
        return pwd == self.password

if __name__ == "__main__":
    user = User("Test User", "mypassword")
    print(user.is_valid_password("mypassword"))  # Should print True
