def foursome(numbers):
    sum = 0
    for i in range(len(numbers)):
        sum += numbers[i]
    return sum


def main():
    numbers = [5, 10, 15, 20, 25]
    print(foursome(numbers))


if __name__ == "__main__":
    main()
